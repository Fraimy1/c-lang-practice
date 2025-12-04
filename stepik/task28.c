#include <stdio.h>
#include <math.h>

int get_digit_n(int number, int n)
{
    // gives nth digit from the end
    return (number / (int)pow(10, n)) % 10;
}

void decypher(int n)
{
    int n1 = (get_digit_n(n, 3) + 3) % 10;
    int n2 = (get_digit_n(n, 2) + 3) % 10;
    int n3 = (get_digit_n(n, 1) + 3) % 10;
    int n4 = (get_digit_n(n, 0) + 3) % 10;

    printf("%d%d%d%d", n3, n4, n1, n2);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    
    decypher(n);

    return 0;
}
