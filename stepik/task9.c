#include <stdio.h>
#include <math.h>


int main(void)
{
        int x1, x2, x3, x4, x5;
        scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
        
        int even = 0;
        int odd = 0;
        int arr[5] = {x1, x2, x3, x4, x5};
        for (size_t i = 0; i < 5; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even += 1;
            }else
            {
                odd += 1;
            }
            // printf("%d %d %d\n", arr[i], even, odd);
        }
    // printf("%d %d\n", odd, even);
    printf("%d", odd - even);
        
}