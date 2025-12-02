#include <stdio.h>
#include <math.h>


int main(void)
{
    int n;
    scanf("%d", &n);
    
    int new_n = n % 60;
    printf("%d", new_n);
}