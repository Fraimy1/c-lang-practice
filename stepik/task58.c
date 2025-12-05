#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);

    if (age <= 6) 
        printf("preschooler");
    else if (age <= 18)
        printf("schoolchild");
    else if (age <= 59)
        printf("worker");
    else
        printf("pensioner");

    return 0;
}
