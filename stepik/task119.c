#include <stdio.h>
#include <limits.h>

void shift_step(int N, int M, int arr[N][M])
{
    int new_arr[N][M];

    for (int i = 0; i < N; i++)
    {
        new_arr[i][0] = arr[i][M - 1];
    }

    for (int j = 1; j < M; j++)
    {
        for (int i = 0; i < N; i++)
        {
            new_arr[i][j] = arr[i][j - 1];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = new_arr[i][j];
        }
    }
}

int main(void)
{
    int N, k;
    
    scanf("%d", &N);
    
    int arr[N][N];
    
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);

    k = k % N;

    for (int step = 0; step < k; step++)
    {
        shift_step(N, N, arr);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
