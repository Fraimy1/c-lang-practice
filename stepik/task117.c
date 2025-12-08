#include <stdio.h>

int main(void)
{
    int N, M;
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
    }

    for (int j = 0; j < M; j++) 
    {
        printf("%d ", sums[M - j - 1]);
    }

    return 0;
}
