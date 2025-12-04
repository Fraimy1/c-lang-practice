#include <stdio.h>
#include <math.h>

const int ALPHABET_LEN = 26;

int shift_by_k(int x, int k)
{
    return (x + k) % ALPHABET_LEN;
}

int main(void)
{
    int k;
    int x1, x2, x3, x4;

    scanf("%d %d %d %d %d", &k, &x1, &x2, &x3, &x4);
    
    int y1 = shift_by_k(x1, k);
    int y2 = shift_by_k(x2, k);
    int y3 = shift_by_k(x3, k);
    int y4 = shift_by_k(x4, k);

    printf("%d %d %d %d", y1, y2, y3, y4);

    return 0;
}
