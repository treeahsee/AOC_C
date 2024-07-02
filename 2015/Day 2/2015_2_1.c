#include <stdio.h>
#include <string.h>

int main(){
    FILE *input;
    char line[25];
    char array[3];
    long int sum = 0;
  

    input = fopen("AOC_2015_2_1.txt", "r");

    // go line by line 
    while (fgets(line, 20, input) != NULL) {

        //split the line and extract l, w, h
        int length;
        int width;
        int height;
        sscanf(line, "%dx%dx%d", &length, &width, &height);

        //find surface area of box
        int surface_area = (2*length*width) + (2*width*height) + (2*height*length);
        
        //add area of smallest side for slack
        int temp = (length < width) ? length : width;
        int min = (temp < height) ? temp : height;
        // sum += min;

        sum += min + surface_area;
        // printf("%d \n", length);
        // printf("%d \n", width);
        // printf("%d \n", height);
        // printf("%d \n", min);
        // printf("%d \n", surface_area);
        // printf("%d \n", sum);
    }
    printf("%d \n", sum);
}