#include <stdio.h>
#include <string.h>




int main(){
    FILE *input;
    char line[25];
    char *array[3];
    int i = 0;
    int sum = 0;


    input = fopen("AOC_2015_2_1.txt", "r");

    do{
        // go line by line 
        fgets(line, 20, input);
        
        // split each line by delimiter "x"
        char *token = strtok(line, "x");
        while (token != NULL){
            array[i++] = token;
            token = strtok(NULL, "x");
        }
        // 2*l*w + 2*w*h + 2*h*l
        sum += (int)(array[0]) * (int)array[1] * 2;
        sum += (int)(array[1]) * (int)array[2] * 2;
        sum += (int)(array[0]) * (int)array[2] * 2;
        
        // + the area of the smallest side
        int min = (int)(array[0]);
        for (int start = 1; start < 3; start++){
            if ((int)array[start] < min)
                min = (int)array[start];
        }
        printf("%d", sum);
        printf("%d", min);
    } while(0);
}