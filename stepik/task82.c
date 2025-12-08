#include <stdio.h>

int main(void) {

    int n;

    while (n != -9999)
    {
        scanf("%d", &n);
        if (n==-9999)
        {
            break;
        }
        
        printf("%d ", n);
    }
    

    return 0;
}