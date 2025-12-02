#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n<=0)
    {
        printf("0");
        return 0;
    }
    

    while (n>1)
    {
        if (n%2==0)
        {
            n = n/2;
        }else if (n%3==0)
        {
            n = n/3;
        }else if (n%5==0)
        {
            n = n/5;
        }else
        {
            printf("0");
            return 0;
        }
        // printf("%d\n", n);
    }
    printf("1");
    return 0;
}
