#include <stdio.h>

int main(void){
    FILE* ptr;
    char ch;
    int floor = 0;

    //Open file in reading mode
    ptr = fopen("AOC_2015_1_1.txt", "r");

    if (NULL == ptr){
        printf("file can't be opened \n");
    }

    // printf("content of this file are \n");

    do{
        ch = fgetc(ptr);
        if (ch == '('){
            floor = ++floor;
        }
        if (ch == ')'){
            floor = --floor;
        }
        // printf("%c", ch);
    } while (ch != EOF);
    printf("%i", floor);
    fclose(ptr);
    return 0;
}