#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, A;
    scanf("%lf %lf %lf", &x, &y, &A);

    int is_equal = (y >= x - A) && (y <= x + A);

    printf("%d", is_equal);


    return 0;
}