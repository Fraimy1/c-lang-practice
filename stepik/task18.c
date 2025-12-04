#include <stdio.h>

int main(void)
{
    int day;
    scanf("%d", &day);

    int week = (day + 2) % 7;

    printf("%d\n", week);
    return 0;
}
