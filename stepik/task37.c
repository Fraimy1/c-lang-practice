#include <stdio.h>
int main(void)
{
    int age, height, weight;
    double bmr = 0;
    char sex;
    
    scanf("%c %d %d %d", &sex, &age, &height, &weight); 

    switch (sex){
        case 'f':
            bmr = 10*weight + 6.25*height - 5*age - 161;
            break;
        case 'm':
            bmr = 10*weight + 6.25*height - 5*age + 5;
            break;
        default:
            printf("ERROR!");
            break;
    }

    if (bmr)
    {
        printf("|  BMR  |\n");
        printf("|%7.2f|\n", bmr);
    }
    

    return 0;
}