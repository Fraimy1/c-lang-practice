#include <stdio.h>
#include <math.h>

int get_digit_n(int number, int n)
{
    // gives nth digit from the end
    return (number / (int)pow(10, n)) % 10;
}


int main(void) {

    int n = 0;
    

    scanf("%d", &n);

    while (n > 0)
    {
        printf("%d", get_digit_n(n, 0));
        n /= 10;
    }
    
    

    return 0;
}