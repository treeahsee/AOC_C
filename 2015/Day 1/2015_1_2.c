#include <stdio.h>


int main(){
    FILE *f;
    char ch;
    int floor = 0;
    int index = 0;

    f = fopen("AOC_2015_1_1.txt", "r");
    do{
        ch = fgetc(f);
        index++;
        if (ch == '(')
            floor = ++floor;
        if (ch == ')')
            floor = --floor;
    } while (floor != -1);
    printf("Floor %d \n", floor);  
    printf("Index %d", index);
    fclose(f);
    return 0;
}
