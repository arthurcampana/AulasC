#include <stdio.h>
#include "fila.h"

struct Queue_{
    int quantity;
    int length;
    int *element;
};

Queue* create_queue(length){
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    if(queue){
        queue->length = length;
        queue->quantity = 0;
        queue->element = (int*) malloc(sizeof(int) * length);
    }
    return queue;
};

Queue* add(Queue* queue,int value){
    if(queue->quantity != queue->length){
        queue->element[queue->quantity] = value;
        queue->quantity++;
        return 1;
    }
    return 0;
}

Queue* next(Queue* queue,int* value){
    if(queue->quantity > 0){
        *value = queue->element[0]; 
        for(int i=1;i<queue->quantity;i++){
            queue->element[i-1] = queue->element[i];
        }
        queue->quantity--;
        return 1;
    }
    return 0;
}

Queue* peek(Queue* queue,int* value){
    if(queue->quantity > 0){
        *value = queue->element[0];
        return 1;
    }
    return 0;
}