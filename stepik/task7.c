#include <stdio.h>
#include <math.h>


int main(void)
{
        double radius;
        double PI = 3.14;
        scanf("%lf", &radius);
        
        double disk_radius = radius * 2;
        
        double time_to_cross = disk_radius * 2 / 900;
        
        printf("%0.lf %0.lf", disk_radius, time_to_cross);

        
}