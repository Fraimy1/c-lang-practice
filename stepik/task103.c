#include <stdio.h>
int main(void)
{ 
        int N = 0;
        scanf("%d", &N);

        int arr[N];

        for(int cnt = 0; cnt < N; cnt++){
            scanf("%d", &arr[cnt]);
        }

        printf("%d %d", arr[N-1], arr[0]);

        return 0;
}