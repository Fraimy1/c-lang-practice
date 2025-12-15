#include <stdio.h>

int main(void)
{
    char s[105];
    char out[105];
    int i = 0, j = 0;

    fgets(s, 105, stdin);

    while (s[i] == ' ')
        i++;

    while (s[i] != '\0' && s[i] != '\n')
    {
        if (s[i] != ' ')
        {
            out[j++] = s[i];
        }
        else
        {
            if (j > 0 && out[j-1] != ' ')
                out[j++] = ' ';
        }
        i++;
    }

    if (j > 0 && out[j-1] == ' ')
        j--;

    out[j] = '\0';

    printf("%s", out);

    return 0;
}
