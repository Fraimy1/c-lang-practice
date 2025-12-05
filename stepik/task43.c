#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int result = ((a < b) * a ) + ((a > b) * b) + (a==b) * a;

    printf("%d", result);


    return 0;
}