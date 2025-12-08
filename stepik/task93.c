#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    int r = 0;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main(void) {
    int a = 0, b = 0;

    scanf("%d %d", &a, &b);

    printf("%d", lcm(a,b));

    return 0;
}