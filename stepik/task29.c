#include <stdio.h>
#include <math.h>


double get_air_density(double height)
{
    const double AIR_DENSITY_ON_SURFACE = 1.29;
    const double z = 1.25 * pow(10, -4);
    
    return AIR_DENSITY_ON_SURFACE * exp(-height * z);
}

int main(void)
{
    int n;

    scanf("%d", &n);
    
    double air_density = get_air_density((double)n);

    printf("%.2lf",air_density);

    return 0;
}
