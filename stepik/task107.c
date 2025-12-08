#include <stdio.h>
int main(void)
{ 
    int N = 0, a = 0, b = 0, len = 0, found_elements = 0;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        len = i;
    }

    for (int i = 0; i < N-1; i++)
    {
        if (arr[i] < arr[N-1] && arr[i] > arr[0])
        {
            printf("%d ", arr[i]);
            found_elements = 1;
        }
    }

    if (!found_elements)
    {
        printf("0");
    }
    
    return 0;
}