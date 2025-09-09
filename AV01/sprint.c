#include "sprint.h"
#include "task.h"
struct Backlog_ {
    int quantity;
    Task* element[10];
};

Backlog* create_backlog(){
    Backlog* backlog = (Backlog*) malloc(sizeof(Backlog));
    if(backlog){
        backlog->quantity = 0;
    }
    return backlog;
}

int add(Backlog* backlog,Task* task) {
    if(backlog && backlog->quantity < 10){
        backlog->element[backlog->quantity] = task;
        backlog->quantity++;
        return 1;
    } else return 0;
}

int del(Backlog* backlog){
    if(backlog && backlog->quantity > 0){
        free_task(backlog->element[backlog->quantity - 1]);
        backlog->element[backlog->quantity - 1] = NULL;
        backlog->quantity--;
        return 1;
    } else return 0;
}

Task* next(Backlog* backlog){
    if(backlog->quantity == 0) return NULL;
    if(backlog->quantity > 0){
        Task* nextTask = backlog->element[0];
        for(int i=0;i < backlog->quantity - 1;i++){
            backlog->element[i] = backlog->element[i + 1];
        }
        backlog->element[backlog->quantity - 1] = NULL;
        backlog->quantity--;
        return nextTask;
    } else return NULL;
}

void free_backlog(Backlog* backlog){
    if(backlog){
        for(int i=0;i < backlog->quantity; i++){
            free_task(backlog->element[i]);
        }
        free(backlog);
    }
}