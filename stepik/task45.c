#include <stdio.h>
int main(void)
{
    float x, y;
    scanf("%f %f", &x, &y);

    int square = (x > 0 && y > 0) + (x < 0 && y > 0) * 2 + (x < 0 && y < 0) * 3 + (x > 0 && y < 0) * 4; 
    printf("%d\n", square);

    return 0;
}