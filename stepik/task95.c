#include <stdio.h>
#include <math.h>


int main(void) {
    int n = -1;
    scanf("%d", &n);
    
    for (size_t i = 1; i < n+1; i++)
    {
        for (size_t j = 1; j < i+1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}