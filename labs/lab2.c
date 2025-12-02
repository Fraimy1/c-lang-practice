#include <stdio.h>
#include <stdint.h>

int getBit(int number, int i) {
    return number << (31-i) >> 31; 
}

int main(){
    float num;
    scanf("%f", &num);

    float* ptr = &num;
    unsigned int* y = (unsigned int*)ptr;

    unsigned int bits = *y;

    printf("%d", getBit(bits, 31-23));
    return 0;
}