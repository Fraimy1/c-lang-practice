#include <stdio.h>
#include <math.h>

int main(void)
{
    int feet;
    int inches;
    
    scanf("%d %d", &feet, &inches);
    int total_inches = inches + feet * 12;
    
    double total_cantimeters = total_inches * 2.54;

    int meters = (int)total_cantimeters / 100;
    int cantimeters = (int)round(total_cantimeters - meters * 100) % 100;

    printf("%d'%d\" = %d.%d m", feet, inches, meters, cantimeters);
    return 0;
}
