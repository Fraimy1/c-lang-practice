#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    scanf("%d", &n);
    
    int digit2 = n % 100 / 10;
    int digit1 = (n % 10);
    int digit3 = n / 100;
    int new_n = digit2*100 + digit1*10 + digit3;
    // printf("%d %d %d\n", digit2, digit3, digit1);
    
    printf("%d", new_n);
    
}