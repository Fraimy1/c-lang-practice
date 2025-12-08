#include <stdio.h>
#include <math.h>

int main(void) {

    int n = 0, num_digits = 0;
    

    scanf("%d", &n);
    

    while (n > 0)
    {
        num_digits++;
        n /= 10;
    }
    
    printf("%d", num_digits);

    return 0;
}