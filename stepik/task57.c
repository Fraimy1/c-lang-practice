#include <stdio.h>

int main(void)
{
    int day, month;
    scanf("%d %d", &day, &month);

    if (day < 1 || day > 31)
    {
        printf("error");
    }
    else if (month < 1 || month > 12)
    {
        printf("error");
    }
    else if (month == 2 && day > 29)
    {
        printf("error");
    }
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        printf("error");
    }
    else
    {
        printf("correct");
    }

    return 0;
}
