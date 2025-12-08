#include <stdio.h>
#include <limits.h>

int main(void)
{ 
    int N, sum_upper = 0, sum_lower = 0;
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
        for (size_t j = i + 1; j < N; j++)
        {
            sum_upper += arr[i][j];
        }
        
        for (size_t j = N - i; j < N; j++)
        {
            sum_lower += arr[i][j];
            // printf("%d ", arr[i][j]);
        }
        // printf("\n");
        
        // printf("\n%d %d\n", sum_upper, sum_lower);
    }

    if (sum_lower < sum_upper)
    {
        printf("%d %d", sum_lower, sum_upper);
    }else
    {
        printf("%d %d", sum_upper, sum_lower);
    }
    
    
   
    return 0;
}