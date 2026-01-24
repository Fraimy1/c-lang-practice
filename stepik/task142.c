#include <stdio.h>
#include <math.h>

void minmax(int *x, int *y)
{
    if (*x > *y)
    {
        int tmp = *x;
        *x = *y;
        *y = tmp;
    }
    
}
