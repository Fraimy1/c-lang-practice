#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (b < a)
    {
        printf("more");
    }else if (b > a)
    {
        printf("less");
    }else
    {
        printf("You win!");
    }
    
}