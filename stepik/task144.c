#include <stdio.h>
#include <math.h>

void char_register(char *ch, int fl){

    if (*ch >= 97 && *ch <= 122)
    {
        if (fl)
        {
            *ch -= 32;
        }
    } else if (*ch >= 65 && *ch <= 90)
    {
        if (!fl)
        {
            *ch += 32;
        }
    }
}

void main()
{
    char a;
    int reg;
    scanf("%c %d", a, reg);
    char_register(&a, reg);
    printf("%c", a);
}