#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d %d",&a, &b);
    
    int n_to_print = 1;
    for (int i = a; i < b + 1; i++)
    {
        for (size_t j = 0; j < n_to_print; j++)
        {
            printf("%4d ", i);
        }   
        n_to_print++;
    }
    
    return 0;
}