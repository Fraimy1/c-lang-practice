#include <stdio.h>

void go_right(int row, int left, int right, int M, int N, int arr[M][N], int *val)
{
    for (int j = left; j <= right; j++)
    {
        arr[row][j] = (*val)++;
    }
}

void go_down(int top, int bottom, int col, int M, int N, int arr[M][N], int *val)
{
    for (int i = top; i <= bottom; i++)
    {
        arr[i][col] = (*val)++;
    }
}

void go_left(int row, int right, int left, int M, int N, int arr[M][N], int *val)
{
    for (int j = right; j >= left; j--)
    {
        arr[row][j] = (*val)++;
    }
}

void go_up(int bottom, int top, int col, int M, int N, int arr[M][N], int *val)
{
    for (int i = bottom; i >= top; i--)
    {
        arr[i][col] = (*val)++;
    }
}

int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);

    int arr[M][N];

    int top = 0, bottom = M - 1;
    int left = 0, right = N - 1;
    int val = 1;
    int step = 0;

    while (val <= M * N)
    {
        int action = step % 4;
        switch (action)
        {
            case 0:
                go_right(top, left, right, M, N, arr, &val);
                top++;
                break;
            case 1:
                go_down(top, bottom, right, M, N, arr, &val);
                right--;
                break;
            case 2:
                go_left(bottom, right, left, M, N, arr, &val);
                bottom--;
                break;
            case 3:
                go_up(bottom, top, left, M, N, arr, &val);
                left++;
                break;
        }
        step++;
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%3d", arr[i][j]);
        }
        if (i < M - 1)
            printf("\n");
    }

    return 0;
}
