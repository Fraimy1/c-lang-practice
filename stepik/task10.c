#include <stdio.h>
#include <math.h>


int main(void)
{
    int x1, x2, x3, x4, x5;
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    
    int is_0 = 0;
    int sum = 0;
    int arr[5] = {x1, x2, x3, x4, x5};
    for (size_t i = 0; i < 5; i++)
    {
        sum += pow(arr[i], 2);
        // printf("%d %d %d\n", arr[i], even, odd);
    }
    // printf("%d %d\n", odd, even);
    printf("%d", sum);
        
}