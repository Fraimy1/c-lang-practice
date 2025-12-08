#include <stdio.h>
int main(void)
{
    int m;
    scanf("%d", &m);
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}