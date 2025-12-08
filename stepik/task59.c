#include <stdio.h>

int main(void)
{
    int base_damage;
    double defender_health;
    int armor_class;
    int is_critical = 0; // bool

    double final_damage;

    scanf("%d %lf %d %d", &base_damage, &defender_health, &armor_class, &is_critical);

    base_damage += base_damage * is_critical;

    final_damage = (double)base_damage;
    
    if (armor_class > 0)
    {
        final_damage -= (double)armor_class / 10 * (double)base_damage;
    }
    

    defender_health -= final_damage;

    printf("%.2lf\n", final_damage);
    
    if (defender_health < 0)
    {
        printf("You win!");
    }
    

}
