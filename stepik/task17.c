#include <stdio.h>
#include <math.h>


int main(void)
{
    double day;
    scanf("%lf", &day);
    
    double week = (day + 1) / 7;
    printf("%.0lf", week);
}