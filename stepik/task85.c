#include <stdio.h>
#include <limits.h>

int main(void) {

    int n = -1, sum = 0;

    int min = INT_MAX;
    int max = INT_MIN;
    
    scanf("%d", &n);        
    
    while (n != 0)
    {
        
        if (n > max)
        {
            max = n;
        }
        
        if (n < min)
        {
            min = n;
        }
        
        scanf("%d", &n);        
    }
    
    printf("%d %d", max, min);

    return 0;
}