#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d",&a, &b);
    
    for (int i = a; i < b + 1; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf("%3d ", i);
        }   
    }
    
    return 0;
}