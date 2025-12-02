#include <stdio.h>

int main(void)
{

        int N = 10;
        int res = 1;
        // scanf("%d", &x);

        for (int i = 1; i <= N; i++){
            res *= i;
            printf("%-8d= %d!\n", res, i);
        }

        return 0;
}