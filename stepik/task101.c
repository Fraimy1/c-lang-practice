#include <stdio.h>

int main() {
    int number = 0, in_0s = 0, sum = 0;

    while (number != -9999)
    {
        scanf("%d", &number);
        if (number == -9999)
        {
            break;
        }else if (in_0s)
        {
            sum += number;
        }
        
        if (number == 0)
        {
            in_0s = !in_0s;
        }
    }
    
    printf("%d", sum);

    return 0;
}