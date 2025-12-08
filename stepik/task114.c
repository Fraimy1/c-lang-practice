#include <stdio.h>
#include <limits.h>

int main(void)
{ 
    int N;
    scanf("%d", &N);

    int arr[N][N];

    for (int i = 0; i < N; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            for (size_t j = 0; j < N; j++)
            {
                arr[N - j - 1][i] = j+1;
            }
        }else
        {
            for (size_t j = 0; j < N; j++)
            {
                arr[j][i] = j+1;
            }
        }
    }

    for (size_t j = 0; j < N; j++)
    {
        for (size_t i = 0; i < N; i++)
        {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}