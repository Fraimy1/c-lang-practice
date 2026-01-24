#include <stdio.h>
#include <math.h>

int get_digit_n(int number, int n)
{
    return (number / (int)pow(10, n)) % 10;
}

void sum_digits(int *x)
{
    int n = *x;
    int sum = 0;
    int i = 0;
    int digit = 1; 
    while (n > 0)
    {
        digit = get_digit_n(*x, i);
        sum += digit;
        // printf("n = %d | digit = %d\n", n, digit);
        n /= 10;
        i+=1;
    }
    *x = sum;
}


int main()
{
    int n;
    scanf("%d", &n);
    sum_digits(&n);
    printf("%d", n);
    return 0;
}