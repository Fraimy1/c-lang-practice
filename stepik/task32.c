#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    int mark;
    scanf("%d", &mark);

    switch (mark) {
        case 1: 
        printf("плохо");
        break;
        case 2: 
        printf("неудовлетворительно"); 
        break; 
        case 3: 
        printf("удовлетворительно"); 
        break;
        case 4: 
        printf("хорошо"); 
        break;
        case 5: 
        printf("отлично"); 
        break;
        
        default :
        break; 
    }

    return 0;
}