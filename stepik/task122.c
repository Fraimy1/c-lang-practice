#include <stdio.h>

int main(void)
{
    int N;
    char c;
    
    scanf("%d", &N);
    
    int counters[26];
    
    for (size_t i = 0; i < 26; i++)
    {
        counters[i] = 0;
    }

    for (size_t k = 0; k < N; k++)
    {
        scanf(" %c", &c);

        if (c >= 'a' && c <= 'z')
        {
            c -= ('a' - 'A');
        }

        // printf("%c ", c);

        int idx = c - 'A';

        // printf("%d\n", idx);

        if (idx >= 0 && idx < 26)
        {
            counters[idx]++;
        }
    }

    for (size_t i = 0; i < 26; i++)
    {
        printf("%d ", counters[i]);
    }

    return 0;
}
