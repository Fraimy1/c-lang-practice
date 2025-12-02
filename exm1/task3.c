#include <stdio.h>


int main(){
    unsigned long long value = 0;
    scanf("%llu", &value);
    // printf("%f %f\n", x, y);
    // scanf("%d", );, 
    unsigned int sum = 0;
    unsigned int digit = 0;

    while (value>0)
    {
        // printf("%d\n", value);
        digit = value%10;
        value = value/10;
        sum += digit;
        // printf("%d %d %d\n", value, digit, sum);
    }
    printf("%u", sum);
    
    return 0;
}