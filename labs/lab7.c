#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char val;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int size;
} List;

static void list_clear(List *l) {
    Node *cur = l->head;
    while (cur) {
        Node *nxt = cur->next;
        free(cur);
        cur = nxt;
    }
    l->head = l->tail = NULL;
    l->size = 0;
}

static Node* list_at(List *l, int pos) {
    if (pos < 0 || pos >= l->size) return NULL;

    if (pos <= l->size / 2) {
        Node *cur = l->head;
        for (int i = 0; i < pos; ++i) cur = cur->next;
        return cur;
    } else {
        Node *cur = l->tail;
        for (int i = l->size - 1; i > pos; --i) cur = cur->prev;
        return cur;
    }
}

static int list_insert(List *l, int pos, char v) {
    if (pos < 0 || pos > l->size) return 0;

    Node *x = (Node*)malloc(sizeof(Node));
    if (!x) return 0;

    x->val = v;
    x->prev = x->next = NULL;

    if (l->size == 0) {
        l->head = l->tail = x;
        l->size = 1;
        return 1;
    }

    if (pos == 0) {
        x->next = l->head;
        l->head->prev = x;
        l->head = x;
        l->size++;
        return 1;
    }

    if (pos == l->size) {
        x->prev = l->tail;
        l->tail->next = x;
        l->tail = x;
        l->size++;
        return 1;
    }

    Node *at = list_at(l, pos);
    if (!at) { free(x); return 0; }

    x->prev = at->prev;
    x->next = at;
    at->prev->next = x;
    at->prev = x;
    l->size++;
    return 1;
}

static int list_delete(List *l, int pos) {
    Node *x = list_at(l, pos);
    if (!x) return 0;

    if (x->prev) x->prev->next = x->next;
    else l->head = x->next;

    if (x->next) x->next->prev = x->prev;
    else l->tail = x->prev;

    free(x);
    l->size--;

    if (l->size == 0) l->head = l->tail = NULL;
    return 1;
}

static int list_get(List *l, int pos, char *out) {
    Node *x = list_at(l, pos);
    if (!x) return 0;
    *out = x->val;
    return 1;
}

static void list_print_all(List *l) {
    if (l->size == 0) {
        printf("List is empty\n");
        return;
    }

    Node *cur = l->head;
    while (cur) {
        printf("%c", cur->val);
        if (cur->next) printf(" ");
        cur = cur->next;
    }
    printf("\n");
}

static void insert_node_desc(Node **nh, Node **nt, Node *x) {
    if (!*nh) {
        *nh = *nt = x;
        x->prev = x->next = NULL;
        return;
    }

    Node *cur = *nh;
    while (cur && cur->val >= x->val) cur = cur->next;

    if (!cur) {
        x->prev = *nt;
        x->next = NULL;
        (*nt)->next = x;
        *nt = x;
        return;
    }

    if (cur == *nh) {
        x->prev = NULL;
        x->next = *nh;
        (*nh)->prev = x;
        *nh = x;
        return;
    }

    x->next = cur;
    x->prev = cur->prev;
    cur->prev->next = x;
    cur->prev = x;
}

static void list_sort_desc(List *l) {
    if (l->size < 2) return;

    Node *nh = NULL, *nt = NULL;
    Node *cur = l->head;

    while (cur) {
        Node *nxt = cur->next;
        cur->prev = cur->next = NULL;
        insert_node_desc(&nh, &nt, cur);
        cur = nxt;
    }

    l->head = nh;
    l->tail = nt;
}

static void print_menu(void) {
    printf("\n");
    printf("1 - init empty list\n");
    printf("2 - insert by position (0..size)\n");
    printf("3 - print element by position (0..size-1)\n");
    printf("4 - delete by position (0..size-1)\n");
    printf("6 - print all\n");
    printf("7 - sort descending (B)\n");
    printf("0 - exit\n");
    printf("\n");
}

int main(void) {
    List l = { NULL, NULL, 0 };
    int cmd;

    while (1) {
        print_menu();
        printf("cmd: ");
        if (scanf("%d", &cmd) != 1) break;

        if (cmd == 0) break;

        if (cmd == 1) {
            list_clear(&l);
            printf("OK\n");
        }
        else if (cmd == 2) {
            int pos;
            char v;
            printf("pos value: ");
            if (scanf("%d %c", &pos, &v) != 2) {
                printf("Error: bad input\n");
                continue;
            }
            if (!list_insert(&l, pos, v)) printf("Error: invalid position or memory\n");
            else printf("OK\n");
        }
        else if (cmd == 3) {
            int pos;
            char v;
            printf("pos: ");
            if (scanf("%d", &pos) != 1) {
                printf("Error: bad input\n");
                continue;
            }
            if (!list_get(&l, pos, &v)) printf("Error: no such position\n");
            else printf("%c\n", v);
        }
        else if (cmd == 4) {
            int pos;
            printf("pos: ");
            if (scanf("%d", &pos) != 1) {
                printf("Error: bad input\n");
                continue;
            }
            if (!list_delete(&l, pos)) printf("Error: no such position\n");
            else printf("OK\n");
        }
        else if (cmd == 6) {
            list_print_all(&l);
        }
        else if (cmd == 7) {
            list_sort_desc(&l);
            printf("OK\n");
        }
        else {
            printf("Error: unknown command\n");
        }
    }

    list_clear(&l);
    return 0;
}
