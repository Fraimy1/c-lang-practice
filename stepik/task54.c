#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a != 2 && b != 2 && c != 2)
    {
        printf("closed");
    }else if (a != 4 && b != 4 && c != 4)
    {
        printf("closed");
    }else if (a != 8 && b != 8 && c != 8)
    {
        printf("closed");
    }else
    {
        printf("open");
    }
}