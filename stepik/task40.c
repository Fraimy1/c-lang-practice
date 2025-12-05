#include <stdio.h>
#include <math.h>
#include <locale.h>

int get_digit_n(int number, int n)
{
    // gives nth digit from the end
    // if there is no digit number nth
    // will return 0
    return (number / (int)pow(10, n)) % 10;
}

int main(void)
{
    setlocale(LC_ALL, "");

    int years;
    scanf("%d", &years);
    
    int last_digit = get_digit_n(years, 0);
    int first_digit = get_digit_n(years, 1);

    switch (first_digit)
    {
        case 1: {
            printf("Мне %d лет", years);
            break;
        }
        
        default:
            switch (last_digit)
            {
                case 1:
                    printf("Мне %d год", years);
                    break;
                case 2:
                case 3:
                case 4:
                    printf("Мне %d года", years);
                    break;
                
                default:
                    printf("Мне %d лет", years);
                    break;
            }
            break;

    }

    return 0;
}