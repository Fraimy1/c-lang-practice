#include <stdio.h>

int main(void) {

    int n = -1, sum = 0;

    while (n != 0)
    {
        scanf("%d", &n);        
        sum += n;
    }
    
    printf("%d", sum);

    return 0;
}