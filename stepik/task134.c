#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[105];
    if (fgets(s, 105, stdin) == NULL)
        return 0;

    int count = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        while (s[i] == ' ')
            i++;

        if (s[i] == '\0' || s[i] == '\n')
            break;

        count++;

        while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n')
            i++;
    }

    printf("%d", count);

    return 0;
}
