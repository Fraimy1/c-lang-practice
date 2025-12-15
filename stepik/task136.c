#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];

    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    // scanf("%s", str2);

    if (strcasecmp(str1, str2) == 0)
    {
        printf("yes");
    }else
    {
        printf("no");
    }

    return 0;
}
