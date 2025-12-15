#include <stdio.h>

int factorial(int p)
{
    int res = 1;
    int i;
    for (i = 1; i <= p; i++)
    {
        res *= i;
    }
    return res;
}

int combin(int n, int k)
{
    int fn = factorial(n);
    int fk = factorial(k);
    int fnk = factorial(n - k);
    return fn / (fk * fnk);
}

int main(void)
{
    int n = 0, k = 0;
    scanf("%d%d", &n, &k);
    printf("%d", combin(n, k));
    return 0;
}
