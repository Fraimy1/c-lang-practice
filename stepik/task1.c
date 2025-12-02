#include <stdio.h>
#include <math.h>
int main()
{
    int k = 123;
    
    scanf("%d", &k);
    
    int digit1 = k/100;
    int digit2 = (k/10 )% 10;
    int digit3 = k%10;
    
    printf("%d%d%d", digit3, digit2, digit1);
    
    return 0;
}