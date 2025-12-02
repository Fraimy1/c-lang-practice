#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n<=0)
    {
        printf("0");
        return 0;
    }
    

    while (n>2)
    {
        if (n%2!=0)
        {
            printf("0");
            return 0;
        }
        n = n/2;
        // printf("%d\n", n);
    }
    printf("1");
    

    return 0;
}
