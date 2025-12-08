#include <stdio.h>
int main(void)
{
    int m, n;
    scanf("%d %d", &n, &m);
    for (size_t i = 1; i < n+1; i++)
    {
        for (size_t j = 1; j < m+1; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("*");
            }else
            {
                printf("-");
            }
        }
        printf("\n");
    }
    
    return 0;
}