#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a != 1)
    {
        printf("closed");
    }else if (b != 0)
    {
        printf("closed");
    }else if (c != 2)
    {
        printf("closed");
    }else if (d != 4)
    {
        printf("closed");
    }else
    {
        printf("open");
    }
    
}