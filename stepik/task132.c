#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[16];
    int len, first, i;

    if (scanf("%15s", s) != 1)
        return 0;

    len = strlen(s);

    if (len <= 3)
    {
        printf("%s", s);
        return 0;
    }

    first = len % 3;
    if (first == 0)
        first = 3;

    for (i = 0; i < first; i++)
        putchar(s[i]);

    while (i < len)
    {
        putchar(' ');
        putchar(s[i]);
        putchar(s[i + 1]);
        putchar(s[i + 2]);
        i += 3;
    }

    return 0;
}
