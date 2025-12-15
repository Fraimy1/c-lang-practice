#include <stdio.h>

int main(void) 
{
    char str[101];
    char c;
    int i = 0;

    scanf("%c\n", &c);
    // fflush(stdin);
    fgets(str, 101, stdin);
    fflush(stdin);

    while (str[i])
    {
        if (str[i] == c)
        {
            printf("%d", i);
            return 0;
        }
        
        i++;
    }
    
    printf("-1");



    return 0;
}
