#include <stdio.h>
#include "aula25/fila.h"

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

int add(Queue* queue,int value){
    if(queue->quantity != queue->length){
        queue->element[queue->quantity] = value;
        queue->quantity++;
        return 1;
    }
    return 0;
}

int next(Queue* queue,int* value){
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

int peek(Queue* queue,int* value){
    if(queue->quantity > 0){
        *value = queue->element[0];
        return 1;
    }
    return 0;
}

int insertbegin(Queue* queue,int value){
    if(queue->quantity < queue->length){
        for(int i=queue->quantity - 1;i>0;i--){
            queue->element[i+1] = queue->element[i];
        }
        queue->element[0] = value;
        queue->quantity++;
        return 1;
    }
    return 0;
}

void freequeue(Queue* queue){
    free(queue);
}