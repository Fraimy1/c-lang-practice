#include <stdio.h>
#include <stdlib.h>

#define DType char

typedef struct a {
    DType data;
    struct a *pNext;
    struct a *pPrev;
} List;

List *Init(void) {
    return NULL;
}

int isEmpty(List *l) {
    return (l == NULL);
}

int Count(List *l) {
    int cnt = 0;
    while (l != NULL) {
        cnt++;
        l = l->pNext;
    }
    return cnt;
}

void FreeList(List *l) {
    while (l != NULL) {
        List *nxt = l->pNext;
        free(l);
        l = nxt;
    }
}

List *Insert(List *l, int ind, DType new_data) {
    int n = Count(l);
    if (ind < 0 || ind > n) {
        printf("Error: Illegal index\n");
        return l;
    }

    List *newPtr = (List *)malloc(sizeof(List));
    if (newPtr == NULL) {
        printf("Error: memory error\n");
        return l;
    }

    newPtr->data = new_data;
    newPtr->pNext = NULL;
    newPtr->pPrev = NULL;

    if (ind == 0) {
        newPtr->pNext = l;
        if (l != NULL) l->pPrev = newPtr;
        return newPtr;
    }

    List *p = l;
    for (int i = 0; i < ind - 1; ++i) p = p->pNext;

    newPtr->pNext = p->pNext;
    newPtr->pPrev = p;

    if (p->pNext != NULL) p->pNext->pPrev = newPtr;
    p->pNext = newPtr;

    return l;
}

int GetData(List *l, int ind, DType *out) {
    int n = Count(l);
    if (ind < 0 || ind >= n) {
        printf("Error: Illegal index\n");
        return 0;
    }

    for (int i = 0; i < ind; ++i) l = l->pNext;
    *out = l->data;
    return 1;
}

List *Delete(List *l, int ind) {
    int n = Count(l);
    if (ind < 0 || ind >= n) {
        printf("Error: Illegal index\n");
        return l;
    }

    List *p = l;
    for (int i = 0; i < ind; ++i) p = p->pNext;

    if (p->pPrev != NULL) p->pPrev->pNext = p->pNext;
    else l = p->pNext;

    if (p->pNext != NULL) p->pNext->pPrev = p->pPrev;

    free(p);
    return l;
}

void PrintList(List *l) {
    if (l == NULL) {
        printf("List is empty\n");
        return;
    }

    int cnt = 0;
    while (l != NULL) {
        printf("%d: %c\n", cnt, l->data);
        cnt++;
        l = l->pNext;
    }
}

static List *InsertNodeDesc(List *sorted, List *x) {
    if (sorted == NULL) {
        x->pPrev = x->pNext = NULL;
        return x;
    }

    List *cur = sorted;
    while (cur != NULL && cur->data >= x->data) cur = cur->pNext;

    if (cur == sorted) {
        x->pPrev = NULL;
        x->pNext = sorted;
        sorted->pPrev = x;
        return x;
    }

    if (cur == NULL) {
        List *tail = sorted;
        while (tail->pNext != NULL) tail = tail->pNext;
        tail->pNext = x;
        x->pPrev = tail;
        x->pNext = NULL;
        return sorted;
    }

    x->pNext = cur;
    x->pPrev = cur->pPrev;
    cur->pPrev->pNext = x;
    cur->pPrev = x;
    return sorted;
}

List *SortDesc(List *l) {
    List *sorted = NULL;

    while (l != NULL) {
        List *x = l;
        l = l->pNext;

        x->pPrev = x->pNext = NULL;
        sorted = InsertNodeDesc(sorted, x);
    }

    return sorted;
}

void PrintMenu(void) {
    printf("\n");
    printf("1) Init empty list\n");
    printf("2) Insert (index, char)\n");
    printf("3) Print element by index\n");
    printf("4) Delete by index\n");
    printf("5) Print all\n");
    printf("6) Sort descending (B)\n");
    printf("0) Exit\n");
    printf("\n");
}

int main(void) {
    List *l = Init();
    int cmd;

    while (1) {
        PrintMenu();
        printf("cmd: ");
        if (scanf("%d", &cmd) != 1) break;

        if (cmd == 0) break;

        if (cmd == 1) {
            FreeList(l);
            l = Init();
            printf("OK\n");
        }
        else if (cmd == 2) {
            int ind;
            char ch;
            printf("index char: ");
            if (scanf("%d %c", &ind, &ch) != 2) {
                printf("Error: bad input\n");
                continue;
            }
            l = Insert(l, ind, ch);
        }
        else if (cmd == 3) {
            int ind;
            char ch;
            printf("index: ");
            if (scanf("%d", &ind) != 1) {
                printf("Error: bad input\n");
                continue;
            }
            if (GetData(l, ind, &ch)) printf("%c\n", ch);
        }
        else if (cmd == 4) {
            int ind;
            printf("index: ");
            if (scanf("%d", &ind) != 1) {
                printf("Error: bad input\n");
                continue;
            }
            l = Delete(l, ind);
        }
        else if (cmd == 5) {
            PrintList(l);
        }
        else if (cmd == 6) {
            l = SortDesc(l);
            printf("OK\n");
        }
        else {
            printf("Error: unknown command\n");
        }
    }

    FreeList(l);
    return 0;
}
