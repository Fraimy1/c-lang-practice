#include <stdio.h>
int main(void)
{ 
    int N = 0, a = 0, b = 0, sum = 0;
    double mean = 0;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    mean = (double)sum / (double)N;

    for (size_t i = 0; i < N; i++)
    {
        if (arr[i] > mean)
        {
            printf("%d ", arr[i]);
        }
    }
    
    for (size_t i = 0; i < N; i++)
    {
        if (arr[i] <= mean)
        {
            printf("%d ", arr[i]);
        }
    }
    
    
    return 0;
}