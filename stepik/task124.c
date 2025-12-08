#include <stdio.h>

int main(void)
{

    char c, c1, c2;
    
    scanf("\n%d", &c);

    c1 = c + 64;
    c2 = c + 96;

    printf("%c%c", c1, c2);
    
    return 0;
}
