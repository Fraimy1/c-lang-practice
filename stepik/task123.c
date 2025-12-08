#include <stdio.h>

int main(void)
{

    char c;
    
    scanf("%c", &c);

    // printf("%c %d\n", c, c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        printf("en");
    }else if (c >= 48 && c <= 57)
    {
        printf("digit");
    }else
    {
        printf("error");
    }
    
    return 0;
}
