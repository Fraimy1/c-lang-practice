#include <stdio.h>
#include <math.h>

int main(void)
{
    double pounds;
    const int pound_to_gr = 454;

    scanf("%lf", &pounds);
    double grams = pounds * 454;
    double kilograms = grams / 1000;
    
    printf("%.2lf", kilograms);
    return 0;
}
