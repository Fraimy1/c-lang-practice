#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    FILE* fp;
    
    fp = fopen("tests/test_file_lab_5.c", "r");
    
    if (fp == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    int ch;
    int prev_char = 0;
    int count_words_inside_comments = 0;
    bool is_inside_comments = false;
    int amount_comments = 0;
    bool in_whitespace = true;

    while ((ch = fgetc(fp)) != EOF) {
        
        if (prev_char == '/' && ch == '*') {
            is_inside_comments = true;
            in_whitespace = true;  
            amount_comments++;
        }

        if (prev_char == '*' && ch == '/') {
            is_inside_comments = false;
            in_whitespace = true;  
        }

        if (is_inside_comments) {
            if (ch == ' ' || ch == '\n' || ch == '\t') {
                in_whitespace = true;
            } else {
                if (in_whitespace) {
                    count_words_inside_comments++;
                }
                in_whitespace = false;
            }
        }
        
        prev_char = ch;     
    }

    count_words_inside_comments -= amount_comments*2;

    printf("%d", count_words_inside_comments);
    fclose(fp);
    return 0;
}