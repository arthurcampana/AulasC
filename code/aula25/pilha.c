#include "pilha.h"
#define TRUE 1
#define FALSE 0


struct Stack_ {
    int quantity;
    int length;
    int *element;
};
Stack* create_stack(int length){
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    if(stack){
        stack->length = length;
        stack->element = (int*) malloc(sizeof(int) * length);
        if(stack->element){
        stack->quantity = 0;
        }
    }
    return stack;
};  

int push(Stack* stack, int value){
    if(stack){
        if(stack->length != stack->quantity){
        stack->element[stack->quantity];
        stack->quantity++;
        return TRUE;
        }
    }
    return FALSE;
};

int pop(Stack* stack, int* value){
    if(stack->quantity > 0) {
        --(stack->quantity);
        *value = stack->element[stack->quantity];
        return TRUE;
    }
    return FALSE;
}

int top(Stack* stack,int* value){
    if(stack->quantity > 0) {
        *value = stack->element[stack->quantity - 1];
        return TRUE;
    }
    return FALSE;
};

void free_stack(Stack* stack){
    free(stack);
};