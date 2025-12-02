#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    int orig = n;
    int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    if (reverse == orig)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
