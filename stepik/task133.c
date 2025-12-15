#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[25];
    if (scanf("%24s", s) != 1)
        return 0;

    int len = strlen(s);
    int i = 0;
    int dot_count = 0;
    int dot_index = -1;

    if (s[0] == '-')
    {
        if (len == 1)
        {
            printf("error");
            return 0;
        }
        i = 1;
    }

    for (; i < len; i++)
    {
        if (s[i] == '.')
        {
            dot_count++;
            if (dot_count == 1)
                dot_index = i;
            continue;
        }
        if (!isdigit((unsigned char)s[i]))
        {
            printf("error");
            return 0;
        }
    }

    if (dot_count == 0)
    {
        printf("int");
        return 0;
    }

    if (dot_count == 1)
    {
        if (s[0] == '.')
        {
            printf("error");
            return 0;
        }

        if (s[len - 1] == '.')
        {
            printf("error");
            return 0;
        }

        if (s[0] == '-' && dot_index == 1)
        {
            printf("error");
            return 0;
        }

        printf("float");
        return 0;
    }

    printf("error");
    return 0;
}
