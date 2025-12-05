#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int n_pos = 0;

    if (a > 0) n_pos++;
    if (b > 0) n_pos++;
    if (c > 0) n_pos++;

    printf("%d", n_pos);
}