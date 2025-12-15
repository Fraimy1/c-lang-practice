#include <stdio.h>

int main(void)
{
    char s[25];
    long long result = 0;

    if (scanf("%24s", s) != 1)
        return 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        result = result * 2 + (s[i] - '0');
    }

    printf("%lld", result);

    return 0;
}
