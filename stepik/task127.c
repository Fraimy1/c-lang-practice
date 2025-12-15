#include <stdio.h>

int main(void) 
{
    char str[101];
    int n_words = 0;
    int in_spaces = 1;

    fgets(str, 101, stdin);

    int i = 0;
    while (str[i])
    {
        if (str[i] == ' ')
        {
            in_spaces = 1;
        }
        else
        {
            if (in_spaces)
            {
                n_words++;
                in_spaces = 0;
            }
        }

        i++;
    }

    printf("%d", n_words);

    return 0;
}
