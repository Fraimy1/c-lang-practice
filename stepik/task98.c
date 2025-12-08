#include <stdio.h>

int main() {
    int number = 0, prev = 0;
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
            printf("NO");
            return 0;
        }

        prev = number;
    }
    
    printf("YES");

    return 0;
}