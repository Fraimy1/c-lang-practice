#include <stdio.h>
int main(void)
{
    int x, y, z, w;
    scanf("%d.%d.%d.%d", &x, &y, &z, &w);

    int is_valid = (x >= 0)&&(x <= 255) && (y >= 0)&&(y <= 255) && (z >= 0)&&(z <= 255) && (w >= 0)&&(w <= 255);
    
    switch (is_valid)
    {
    case 1:
        printf("IP is valid!");
        break;
    
    case 0:
        printf("IP is invalid!");
        break;

    default:
        break;
    }

    return 0;
}