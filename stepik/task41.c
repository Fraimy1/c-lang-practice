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

    char r, w, x;
    int sum = 0;
    scanf("%c%c%c", &r, &w, &x);

    switch (r)
    {
    case 'r':
        sum += 4;
        break;
    case '-':
        break;
    default:
        printf("Invalid format");
        w = '!';
        x = '!';
        break;
    }
    switch (w)
    {
    case 'w':
        sum += 2;
        break;
    case '-':
        break;
    case '!':
        break;
    default:
        printf("Invalid format");
        x = '!';
        break;
    }
    switch (x)
    {
    case 'x':
        sum += 1;
        printf("%d",sum);
        break;
    case '-':
        printf("%d",sum);
        break;
    case '!':
        break;
    default:
        printf("Invalid format");
        break;
    }

    
    
    return 0;
}