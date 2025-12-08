#include <stdio.h>
#include <math.h>
#include <limits.h>

int min(int x1, int x2, int x3)
{
    if (x1 <= x2 && x1 <= x3)
    {
        return x1;
    }else if (x2 <= x1 && x2 <= x3)
    {
        return x2;
    }else if (x3 <= x1 && x3 <= x2)
    {
        return x3;
    }else
    {
        return x3;
    }
    
}

void remove_min(int *x1, int *x2, int *x3, int min_n)
{
    
    if (*x1 == min_n)
    {
        *x1 = INT_MAX;
    }else if (*x2 == min_n)
    {
        *x2 = INT_MAX;
    }else if (*x3 == min_n)
    {
        *x3 = INT_MAX;
    }
}

int main(void)
{
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    for (size_t i = 0; i < 3; i++)
    {
        int min_n = min(x1, x2, x3);
        remove_min(&x1, &x2, &x3, min_n);
        printf("%d ", min_n);
        // printf("%d %d %d\n",x1, x2, x3);
    }

}
