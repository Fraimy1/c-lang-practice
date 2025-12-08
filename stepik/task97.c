#include <stdio.h>

int main() {
    int number = 0, count = 0, prev = -1;
    scanf("%d", &count);

    scanf("%d", &prev);
    printf("%d", prev);

    for (size_t i = 1; i < count; i++)
    {
        scanf("%d", &number);
        if (prev != number)
        {
            printf(" %d", number);
        }
        
        prev = number;    
    }

    return 0;
}