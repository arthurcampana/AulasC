#include <stdlib.h>
#include "DoubleNode.h"
#include "Deque.h"
struct Deque_{
    Doublenode* start;
    Doublenode* end;
};

Deque* create_deque(){
    Deque* deque = (Deque*) malloc(sizeof(Deque));
    if(deque){
        deque->start = NULL;
        deque->end = NULL;
        return deque;
    } else return 1;
}

int inserir_inicio(Deque* deque,int value){
    Doublenode* node = create_double_node(value);
    if(node){
        if(deque->start == NULL){
            deque->end = node;
        } else {
            set_next(node,deque->start);
            set_previous(deque->start,node);
        }
        deque->start = node;
        return 0;
    } else return 1;
}

int inserir_fim(Deque* deque, int value){
    Doublenode* node = create_double_node(value);
    if(node){
        if(deque->start == NULL){
            deque->start = node;
        } else {
            set_previous(node,deque->end);
            set_next(deque->end,node);
        }
        deque->end = node;
        return 0;
    } else return 1;
}

int* remover_inicio(Deque* deque,int* value){
    if(deque == NULL) return 1;
    get_data(deque->start,value);
    Doublenode* remove = deque->start;
    deque->start = get_next(deque->start);
    if(deque->start == NULL){
        deque->end = NULL;
    } else {
        set_previous(deque->start,NULL);
    }
    free(remove);
    return value;
}

int* remover_fim(Deque* deque, int* value){
    if(deque == NULL) return 1;
    get_data(deque,value);
    Doublenode* remove = deque->end;
    deque->end = get_previous(deque->end);
    if(deque->end == NULL) {
        deque->start = NULL;
    } else {
        set_next(deque->end,NULL);
    }
    free(remove);
    return value;
}

void free_deque(Deque* deque){
    Doublenode* cursor;
    while(deque->start != NULL){
        cursor = deque->start;
        deque->start = get_next(deque->start);
        free(cursor);
    }
    free(deque);
}