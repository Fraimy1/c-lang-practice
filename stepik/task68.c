#include <stdio.h>
int main(void)
{
    int m, n;
    scanf("%d %d", &n, &m);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}