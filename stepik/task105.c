#include <stdio.h>
int main(void)
{ 
    int N = 0, a = 0, b = 0, len = 0;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        len = i;
    }

    for(int i = 0; i < N; i++)
    {
        if (arr[i] != arr[N - i - 1])
        {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    
    return 0;
}