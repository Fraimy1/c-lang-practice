#include <stdio.h>

int main() {
    union {
        float f;
        unsigned int u;
    } data;

    scanf("%f", &data.f);

    unsigned int EXP_MASK = 0b01111111100000000000000000000000;

    unsigned int exponent = data.u & EXP_MASK;
    exponent = exponent - (1 << 23);

    unsigned int new_bits = (data.u & ~EXP_MASK) | exponent;

    union {
        float f;
        unsigned int u;
    } result;

    result.u = new_bits;

    printf("%f\n", result.f);
    return 0;
}
