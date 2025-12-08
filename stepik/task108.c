#include <stdio.h>
int main(void)
{ 
    int N = 0, a = 0, b = 0, sum = 0;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%.2lf", (double)sum / (double)N);
    
    return 0;
}