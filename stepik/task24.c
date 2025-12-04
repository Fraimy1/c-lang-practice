#include <stdio.h>
#include <math.h>

int get_digit_n(int number, int n)
{
    // gives nth digit from the end
    return (number / (int)pow(10, n)) % 10;
}

int any_to_dec(int n, int sys)
{
    int n1 = get_digit_n(n, 3);
    int n2 = get_digit_n(n, 2);
    int n3 = get_digit_n(n, 1);
    int n4 = get_digit_n(n, 0);

    int dec = (int)(n4 * pow(sys, 0) + n3 * pow(sys, 1) + n2 * pow(sys, 2) + n1 * pow(sys, 3));
    return dec;
}


int main(void)
{
    int n;
    int sys;

    scanf("%d %d", &sys, &n);
    
    int dec_n = any_to_dec(n, sys);
    
    printf("%d", dec_n);
    return 0;
}
