#include <stdio.h>

int main(void)
{
        double x, y;
        int num_input = scanf("%lf%lf", &x, &y);

        if ((x == 0) || (y == 0) || (num_input != 2))
        {
            printf("Incorrect input");
            return 0;
        }        
        
        if (x > 0) {
                if (y > 0) {
                        printf("%d\n", 1);
                } else {
                        printf("%d\n", 4);
                }
        } else { 
                if (y > 0) {
                        printf("%d\n", 2);
                } else {
                        printf("%d\n", 3);
                }
        }

        return 0;
}