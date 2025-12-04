#include <stdio.h>
#include <math.h>

int get_digit_n(int number, int n)
{
    // gives nth digit from the end
    return (number / (int)pow(10, n)) % 10;
}

int bin_to_dec(int bin_n)
{
    int n1 = get_digit_n(bin_n, 3);
    int n2 = get_digit_n(bin_n, 2);
    int n3 = get_digit_n(bin_n, 1);
    int n4 = get_digit_n(bin_n, 0);

    int dec = (int)(n4 * pow(2, 0) + n3 * pow(2, 1) + n2 * pow(2, 2) + n1 * pow(2, 3));
    return dec;
}


int main(void)
{
    int bin_n;

    scanf("%d", &bin_n);
    
    int dec_n = bin_to_dec(bin_n);
    
    printf("%d", dec_n);
    return 0;
}
