#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[60];
    char str2[60];

    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char a_last = str1[len1 - 1];
    char b_first = str2[0];

    char b_last = str2[len2 - 1];
    char a_first = str1[0];

    if (a_last >= 'a' && a_last <= 'z') a_last -= 32;
    if (b_first >= 'a' && b_first <= 'z') b_first -= 32;
    if (b_last >= 'a' && b_last <= 'z') b_last -= 32;
    if (a_first >= 'a' && a_first <= 'z') a_first -= 32;

    if (a_last == b_first || b_last == a_first)
        printf("yes");
    else
        printf("no");

    return 0;
}
