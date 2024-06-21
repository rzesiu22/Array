#define SIZE 10
#include <stdio.h>
#include "array.h"
void menu() {
    printf("(1) - Input Values\n");
    printf("(2) - Print Array\n");
    printf("(3) - Find Maximum Value\n");
    printf("(4) - Find minimum Value\n");
    printf("(5) - Calculate Average\n");
    printf("(6) - Enter to file\n");
    printf("(7) - Read  file\n");
    printf("(9) - Stop Program\n");
}
int main() {

    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    int option = 0;
    int min;
    int max;
    float avg;


    while(option!=9) {

        menu();
        printf("Choose the operation you want to do:\n");
        scanf("%i", &option);


        switch(option){
            case 1 :enterValue(array);
                break;
            case 2 :
                printArray(array);
                break;
            case 3 :
                max = findMaximumValue(array);
                printf("maxmium value = %d\n",max);
                break;
            case 4 :
                min = findMinimumValue(array);
                printf("minium value = %d\n",min);
                break;
            case 5:
                avg= calculateAverage(array);
                printf("Average valute = %f\n", avg);
            case 6 :
                fileEnter(array);
                puts("Table saved");
                break;
            case 7 :
                readFile(array);
                break;
            case 9 :
                break;
            default:
                printf("Select the appropriate option");
                break;
        }
    }
}