#include <stdio.h>

int get_digit_sum(char str[100])
{
    int sum = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        sum += str[i] - '0';
        i++;
    }
    
    return sum;
}

int main(void)
{
    char str1[100];
    char str2[100];

    scanf("%3s", str1);
    scanf("%3s", str2);
    
    if (get_digit_sum(str1) == get_digit_sum(str2))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
