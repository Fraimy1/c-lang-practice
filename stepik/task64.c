#include <stdio.h>
#include <math.h>


int main(void)
{
    for (double i = -3; i <= 3; i += 0.5)
    {
        printf("%5.2lf | %8.3lf\n", i, pow(i,3));
    }

}
