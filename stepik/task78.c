#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int count = 0;
    
    for (size_t i = 1; i < n+1; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n%d", count);
    
    
    return 0;
}