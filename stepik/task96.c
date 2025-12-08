#include <stdio.h>

int main() {
    int number = 0, count = 0;

    do {
        count += scanf("%d", &number);
    } while (number >= 0);

    if (number == -9999 && count > 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}