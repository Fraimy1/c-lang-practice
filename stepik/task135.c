#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[45];
    if (fgets(s, 45, stdin) == NULL)
        return 0;

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }

    int i = 0;
    while (i < len)
    {
        if (s[i] == ' ')
        {
            putchar(' ');
            i++;
        }
        else
        {
            int start = i;
            while (i < len && s[i] != ' ')
                i++;
            int end = i - 1;
            int j;
            for (j = end; j >= start; j--)
                putchar(s[j]);
        }
    }

    return 0;
}
