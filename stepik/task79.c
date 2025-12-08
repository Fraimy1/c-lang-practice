#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int is_prime = 1;

    for (size_t i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
        }
    }

    printf("%d", is_prime);
    
    
    return 0;
}