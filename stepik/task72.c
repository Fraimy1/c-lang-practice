#include <stdio.h>
int main(void)
{
    int k, m;
    scanf("%d %d",&k, &m);
    if (k <= 0)
    {
        k = 1;
    }

    if (m <= 0)
    {
        printf("0");
        return 0;
    }
    

    for (int i = k; i < m + 1; i++)
    {
        printf("%d ", i);
    }

    printf("\n%d", m - k + 1);
    
    return 0;
}