#include <stdio.h>

int main() {
    int number = 0, in_0s = 0, sum = 0;

    for (size_t i = 1; i < 101; i++)
    {
        if (i%3 == 0 && i%5 == 0)
        {
            printf("FizzBuzz ");
        }else if (i%3 == 0)
        {
            printf("Fizz ");
        }else if (i%5 == 0)
        {
            printf("Buzz ");
        }else
        {
            printf("%d ", i);
        }
    }
    

    return 0;
}