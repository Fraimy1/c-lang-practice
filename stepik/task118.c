#include <stdio.h>
#include <limits.h>

int main(void)
{
    int N, M;
    int max_sum = INT_MIN, max_sum_i = -1;
    int min_sum = INT_MAX, min_sum_i = -1;
    
    scanf("%d %d", &N, &M);

    int arr[N][M];
    int sums[M];

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < M; j++) 
    {
        sums[j] = 0;
        for (int i = 0; i < N; i++) 
        {
            sums[j] += arr[i][j];
        }
        
        if (sums[j] > max_sum)
        {
            max_sum = sums[j];
            max_sum_i = j;
        }
        
        if (sums[j] < min_sum)
        {
            min_sum = sums[j];
            min_sum_i = j;
        }
    }

    {
        for (int i = 0; i < N; i++) 
        {
            int tmp = arr[i][max_sum_i];

            arr[i][max_sum_i] = arr[i][min_sum_i];
            arr[i][min_sum_i] = tmp;
        }
    }

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
