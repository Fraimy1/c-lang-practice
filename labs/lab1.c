#include <stdio.h>
#include <stdint.h>

int getBit(int number, int i) {
    return number << (31-i) >> 31; 
}

int main(){
    int32_t num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    num = -num; 
    printf("%d", num);
    int num_bits = sizeof(int32_t) * 8;

    printf("\nYour number in binary is: ");
    for (int i = num_bits-1; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }

    return 0;
}