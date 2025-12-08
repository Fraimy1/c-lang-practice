#include <stdio.h>
#include <math.h>

int main(void) {

    int n = 0, pow_2 = 0, i = 1;
    

    scanf("%d", &n);

    while (pow_2 <= n)
    {
        pow_2 = pow(2, i);
        
        if (pow_2 > n)
        {
            break;
        }
        
        printf("%d ", i);
        
        i++;
    }
    

    return 0;
}