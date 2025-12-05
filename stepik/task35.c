#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    char op = '+';
    int a = 0;
    int b = 0;

    scanf("%d %d %c", &a, &b, &op);
    double result = 0;
    switch(op){
        case '+':
            result = (double)a + (double)b;
            break;
        case '-':
            result = (double)a - (double)b;
            break;
        case '*':
            result = (double)a * (double)b;
            break;
        case '/':
            switch (b)
            {
                case 0:
                    printf("ERROR!");
                    return 0;
                default:
                    break;
            }
            result = (double)a / (double)b;
            break;
        default:
            printf("ERROR!");
            break;
    }
    if (result)
    {
        printf("%.2lf", result);
    }

        

    return 0;
}