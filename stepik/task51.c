#include <stdio.h>
#include <math.h>

int dist(int x1, int y1)
{
    return pow(x1*x1 + y1*y1, 0.5);
}

int main(void)
{
    int x1, y1;
    int x2, y2;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    int dst1 = dist(x1, y1);
    int dst2 = dist(x2, y2);

    // printf("%d %d", dst1, dst2);

    printf("%d", (dst1 > dst2 ) + 1 * (dst1 != dst2));
    
    
    
}