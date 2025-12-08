#include <stdio.h>
#include <math.h>

int main(void) {

    int n = 0;
    int is_pow_of_2 = 1;

    scanf("%d", &n);
    
    if (n==0)
    {
        printf("NO");
        return 0;
    }
    

    while (n > 1)
    {
        // printf("%d %d\n", n, n%2);
        if (n % 2 != 0)
        {
            is_pow_of_2 = 0;
            break;
        }
        n /= 2;
    }
    
    if (is_pow_of_2)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    


    return 0;
}