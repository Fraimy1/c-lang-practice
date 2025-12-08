#include <stdio.h>
int main(void)
{
    int k;
    scanf("%d",&k);
    int res = 1;

    for (int i = 2; i < k+1; i++)
    {
        res *= i;
    }

    printf("%d", res);

    return 0;
}