#include <stdio.h>

int main(void)
{

    char c, c_display;
    
    scanf("\n%d", &c);

    for (char i = 90 - c + 1; i <= 90; i++)
    {
        c_display = i;
        printf("%c", c_display);

    }
    
    
    return 0;
}
