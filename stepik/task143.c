#include <stdio.h>
#include <math.h>

void char_cesar(char *ch, int shift){
    int alphabet_pos = *ch - 97;
    alphabet_pos = (alphabet_pos + shift);
    alphabet_pos = (alphabet_pos > 25) ? alphabet_pos % 25 - 1 : alphabet_pos;
    *ch = 97 + alphabet_pos;
    // printf("%d %c\n", alphabet_pos, *ch);
}

void char_cesar(char *ch, int shift){
    int alphabet_pos = 120 - 97;
    alphabet_pos = 23 % 25 == 2;
    *ch = 97 + 2;
    // printf("%d %c\n", alphabet_pos, *ch);
}

void main()
{
    char a;
    int shift;
    scanf("%c %d", &a, &shift);
    char_cesar(&a, shift);
    printf("%c", a);
}