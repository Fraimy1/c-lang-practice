#include <stdio.h>
int main(void)
{
    // дополните код программы
    for (size_t i = 0; i < 7; i++){
        int tmp = 0;
        scanf("%d", &tmp);
        printf("%d ", tmp*tmp);
    }

    return 0;
}