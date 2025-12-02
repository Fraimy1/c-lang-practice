#include <stdio.h>

int main(void)
{
    int day;
    scanf("%d", &day);

    int week = (day + 3) / 7 + 1;

    printf("%d\n", week);
    return 0;
}
