#include <stdio.h>
#include <limits.h>

int main(void)
{ 
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[N][M];

    for (int i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int arr_t[M][N];

    for (size_t j = 0; j < M; j++)
    {
        for (size_t i = 0; i < N; i++)
        {
            arr_t[j][i] = arr[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}