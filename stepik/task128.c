#include <stdio.h>

int min(int a, int b)
{
    return a * (a < b) + b * (b <= a);
}
