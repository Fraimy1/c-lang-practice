#include <stdio.h>

int main(void)
{
    int day = 0, month, day_in_month;
    
    scanf("%d %d", &month, &day_in_month);

    switch (month)
    {
        case 12: day += 30;
        case 11: day += 31;
        case 10: day += 30;
        case 9:  day += 31;
        case 8:  day += 31;
        case 7:  day += 30;
        case 6:  day += 31;
        case 5:  day += 30;
        case 4:  day += 31;
        case 3:  day += 28;
        case 2:  day += 31;
        case 1:  day += day_in_month;
                break;
    }

    
    printf("%d", day);

    return 0;
}