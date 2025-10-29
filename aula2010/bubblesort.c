#include "bubblesort.h"
#include <stdio.h>
#define TRUE 1;
#define FALSE 0;

void bubbleSort(int vector[], int length){
    int swap,i=1,j, tmp;
    do {
        swap = FALSE;
        for(j = 0; j < length -i; j++){
            if(vector[j] > vector[j+1]){
                tmp = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = tmp;
                swap = TRUE;
            }
        } i++;
    } while(swap);
}