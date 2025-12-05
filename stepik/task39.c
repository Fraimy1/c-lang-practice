#include <stdio.h>
#include <math.h>

int get_digit_n(int number, int n)
{
    // gives nth digit from the end
    return (number / (int)pow(10, n)) % 10;
}
    
int main(void)
{
    int k, x;
    int mult = 1;
    scanf("%d", &k);
    scanf("%d", &x);
    
    int shift = 4 - k;

    switch (k)
    {
        case 4:
            mult *= get_digit_n(x, 0 - shift);
        case 3:
            mult *= get_digit_n(x, 1 - shift);
        case 2:
            mult *= get_digit_n(x, 2 - shift);
        case 1:
            mult *= get_digit_n(x, 3 - shift);
            break;
        
        default: 
            mult = 0;
            break;
            
    }

    
    printf("%d", mult);

    return 0;
}