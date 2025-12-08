#include <stdio.h>
#include <math.h>


int is_prime(int n)
{
    int prime = 1;

    for (size_t i = 2; i < (int)(pow(n, 0.5)+1); i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    return prime;
}

int main(void) {

    int n = 0;
    int square = 0;
    int i = 1;
    
    scanf("%d", &n);
    
    while (square <= n)
    {

        square = pow(i, 2);
        if (square > n)
        {
            break;
        }

        printf("%d ", square);
    
        i++;
        
    }
    


    return 0;
}