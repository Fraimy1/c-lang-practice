#include <stdio.h>
#include <math.h>
int main()
{
    int k = 0;
    
    scanf("%d", &k);
    
    if (k==0)
    {
        k=1;
    }else
    {
        k=0;
    }
    
    
    
    printf("%d", k);
    
    return 0;
}