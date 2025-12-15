#include <stdio.h>

int main(void)
{
    char s1[100];
    char s2[100];
    int i = 0;
    int diffs = 0;

    fgets(s1, 100, stdin);
    fflush(stdin);
    fgets(s2, 100, stdin);
    fflush(stdin);

    while (s1[i])
    {
        if (s1[i] != s2[i])
        {
            // printf("\n%c %c", s1[i], s2[i]);
            diffs++;
        }
        i++;
    }
    
    printf("%d", diffs);

    return 0;
}
