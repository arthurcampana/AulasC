#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct List_{
    int quantity;
    int length;
    int* element;
};

List* create_list(int length){
    List* list = (List*) malloc(sizeof(List));
    if(list){
        list->element = (int*) malloc(sizeof(int) * length);
        if(list->element){
            list->length = length;
            list->quantity = 0;
            return list;
        }
    }
}

int insert_head(List* list,int value){
     if(list->quantity < list->length){
        if(list->element[0]){
            for(int i=list->quantity - 1;i>0;i--){
                list->element[i+1] = list->element[i];
            };
            list->element[0] = value;
            list->quantity++;
            return 1;
        }
        else if(!list->element[0]){
            list->element[0] = value;
            list->quantity++;
            return 1;
        }
        else return 0;
    }
}

int insert_tail(List* list,int value){
    if(list == NULL){return 0;}
    if(list->quantity < list->length){
        list->element[list->quantity] = value;
        list->quantity++;
        return 1;
    }
    else return 0;
}

int insert_position(List* list,int position,int value){
    if(!list){return 0;}
    if(list->quantity >= list->length) return 0;
    if(position > 0 && position <= list->quantity + 1 ){
        for(int i = list->quantity;i>=position;i--){
            list->element[i] = list->element[i - 1];
        }
        list->element[position-1] = value;
        list->quantity++;
        return 1;
    }
}

int remove_head(List* list,int* value){
    if(list == NULL){return 0;}
    if(list->quantity > 0){
        *value = list->element[0];
        for(int i=0;i<list->quantity;i++){
            list->element[i] = list->element[i+1];
        }
        list->quantity--;
        return 1;
    }
    else return 0;
}

int remove_tail(List* list,int* value){
    if(!list){return 0;}
    if(list->quantity>0){
        *value = list->element[list->quantity - 1];
        list->quantity--;
        return 1;
    }
    else return 0;
}

int remove_position(List* list, int position, int value){
    if(list){
        for(int i=list->quantity;i>=)
    }
}