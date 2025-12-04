#include <stdio.h>
#include <math.h>

double f_to_c(double fahrenheit)
{
    return (fahrenheit - 32) * 5/9;
}


int main(void)
{
    double fahrenheit;

    scanf("%lf", &fahrenheit);
    
    double celcius = f_to_c(fahrenheit);
    
    printf("%.2lf", celcius);
    return 0;
}
