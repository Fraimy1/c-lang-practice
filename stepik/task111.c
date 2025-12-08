#include <stdio.h>
#include <limits.h>

int main(void)
{ 
    int N = 0;
    int min = INT_MAX, max = INT_MIN, min_i=0, max_i=0;
    
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (size_t i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_i = i;
        }
        
        if (arr[i] < min)
        {
            min = arr[i];
            min_i = i;
        }
    }
    
    for (size_t i = 0; i < N; i++)
    {
        if (arr[i] == min)
            arr[i] = max;
        else if (arr[i] == max)
            arr[i] = min;
    }

    
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}