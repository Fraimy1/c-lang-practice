#include <stdio.h>
#include <limits.h>

int main(void)
{ 
    int N, mult_main = 1, mult_anti = 1;
    scanf("%d", &N);

    int arr[N][N];

    for (int i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        mult_main *= arr[i][i];
        
        mult_anti *= arr[i][N-i-1];
    }

    printf("%d ", mult_main * (mult_main >= mult_anti) + mult_anti * (mult_anti > mult_main));
    printf("%d ", mult_main * (mult_main <= mult_anti) + mult_anti * (mult_anti < mult_main));
    
    return 0;
}