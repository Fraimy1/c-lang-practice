#include <stdio.h>
int main(void)
{
    int x, abs_x;
    scanf("%d", &x);

    abs_x = (x * (x < 0) * -1) + (x * (x > 0)); 
    printf("%d\n", abs_x);

    return 0;
}