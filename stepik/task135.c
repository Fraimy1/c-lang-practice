#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[60];
    char str2[60];

    scanf("%s", str1);
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
    {
        printf("yes");
    }else
    {
        printf("no");
    }

    return 0;
}
