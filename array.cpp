#include "array.h"
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
FILE * fptr;
void  enterValue(int *array){
    printf("Input values to array:\n");
    for (int i=0; i < SIZE; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
void printArray(int array[]) {
    for (int i=0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i )
    {
        if(array[i] > max) max = array[i];
    }
    return max;
}
int findMinimumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i )
    {
        if(array[i] < min) min = array[i];
    }
    return min;
}
float calculateAverage(int array[]){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i ) {
        sum = sum + array[i];
    }
    float avg = (float)sum / SIZE;
    return avg;
}
void fileEnter(int array[])
{
    fptr = fopen("text.txt", "w+");
    if (fptr == 0)
    {
        exit(1);
    }
    for (int u = 0; u < SIZE ; ++u)
    {
        fputc(array[u], fptr);
    }

    fclose(fptr);
}
void readFile(int array[])
{
    fptr = fopen("text.txt", "r+");
    fseek(fptr, 0, SEEK_SET);
    printf("File content:\n");
    for (int i = 0; i < SIZE; i++)
    {
        array [i] = fgetc(fptr);
        fseek(fptr, 0, SEEK_CUR);
        printf("%d\n", array [i]);
    }
    printf("\n");
    fclose(fptr);
}