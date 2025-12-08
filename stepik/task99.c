#include <stdio.h>

int main() {
    int number = 0, prev = 0, i = 2;
    scanf("%d", &prev);

    while (number != -9999)
    {
        scanf("%d", &number);
        if (number == -9999)
        {
            break;
        }
        
        if (prev >= number)
        {
            printf("%d", i);
            return 0;
        }

        prev = number;
        i++;
    }
    
    printf("0");

    return 0;
}