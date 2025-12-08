#include <stdio.h>

int main(void) 
{
    char str[30];
    fgets(str, 30, stdin);
    fflush(stdin); // очищаем поток ввода
    // puts(str);

    int i = 0;
    while(str[i])
    {
        ++i;
    }

    printf("%d", i-1);

    return 0;
}