#include <stdio.h>
#include <math.h>

int main(void)
{
    const int SPLIT_PERIOD = 3;
    int hours;
    scanf("%d", &hours);

    int number = pow(2, hours/SPLIT_PERIOD);

    printf("%d\n", number);
    return 0;
}
