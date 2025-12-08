#include <stdio.h>
#include <math.h>


int main(void) {
    int n = -1;
    
    while (n != 0)
    {
        scanf("%d", &n);
        
        if (n == 0)
        {
            break;  
        }else if (n > 0)
        {
            printf("%d ", n);
            
        }
    }
    

    return 0;
}