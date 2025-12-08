#include <stdio.h>

int main() {
    int number = 0, code_recieved = 0;

    while (number != -9999)
    {
        scanf("%d", &number);
        if (number == -9999)
        {
            break;
        }else if (code_recieved)
        {
            printf("%d ", number);
        }else if (number == 2517)
        {
            code_recieved = 1;
        }
    }
    

    return 0;
}