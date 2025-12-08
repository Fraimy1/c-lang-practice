#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    
    int before_prev = 1; // F1
    int prev = 1; // F2
    int tmp;

    for (int i = 3; i < n + 1; i++) // i = 3 = F3
    {
        tmp = prev;
        prev = before_prev + prev;
        before_prev = tmp;
    }

    printf("%d", prev);

    return 0;
}