#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int k;
    scanf("%d", &k);

    int is_even = (int)(k % 2 == 0);

    switch(is_even){
        case 1:
            printf("Не любит");
            break;
        case 0:
            printf("Любит");
            break;
    }
        

    return 0;
}