#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    scanf("%d", &n);
    
    int new_n = n % 3600;
    printf("%d", new_n);
    
}