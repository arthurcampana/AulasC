#include <stdlib.h>
#include "DoubleNode.h"
#include "ListaNode.h"

struct List_{
    Doublenode* start;
    Doublenode* end;
    int position;
};


List* create_list(){
    List* list = (List*) malloc(sizeof(List));
    if(list){
        list->start = NULL;
        list->end = NULL;
        return list;
    } else return 1;
}

int inserir_inicio(List* list,int value){
    Doublenode* node = create_double_node(value);
    if(node){
        if(list->start == NULL){
            list->end = node;
        } else {
            set_next(node,list->start);
            set_previous(list->start,node);
        }
        list->start = node;
        return 0;
    } else return 1;
}

int inserir_fim(List* list, int value){
    Doublenode* node = create_double_node(value);
    if(node){
        if(list->start == NULL){
            list->start = node;
        } else {
            set_previous(node,list->end);
            set_next(list->end,node);
        }
        list->end = node;
        return 0;
    } else return 1;
}

int inserir_posicao(List* list,int position,int value){
    if(!list) return 1;
    Doublenode* cursor = list->start;
    if(position == 1){
        inserir_inicio(list,value);
        return 0;
    }
    for(int i = 0;i < position - 1;i++){
        cursor = get_next(cursor);
    }
    if(cursor == NULL) return 1;
    if(get_next(cursor) == NULL){
        inserir_fim(list,value);
        return 0;
    }
    Doublenode* node = create_double_node(value);
    if(node){
        set_next(node,get_next(cursor));
        set_previous(node,cursor);
        set_previous(get_next(cursor),node);
        set_next(cursor,node);
        return 0;
    }
}

int* remover_posicao(List* list,int position,int* value){
    if(list == NULL) return NULL;
    DoubleNode* cursor = list->start;
    if(position == 1){
        remover_inicio(list,value);
        return 0;
    }
    for(int i=0; i < position - 1; i++){
        cursor = get_next(cursor);
        if(get_next(cursor) == NULL) return NULL;
    }
    *value = get_data(get_next(cursor));
    if(get_next(cursor) == NULL){
        remover_fim(list,value);
        return 0;
    }
    DoubleNode* removed = cursor;
    removed = get_next(removed);
    set_next(cursor,get_next(removed));
    set_previous(get_next(removed),cursor);
    free(removed);
    return valor;
}

int* remover_inicio(List* list,int* value){
    if(list == NULL) return 1;
    get_data(list->start,value);
    Doublenode* remove = list->start;
    list->start = get_next(list->start);
    if(list->start == NULL){
        list->end = NULL;
    } else {
        set_previous(list->start,NULL);
    }
    free(remove);
    return value;
}

int* remover_fim(List* list, int* value){
    if(list == NULL) return 1;
    get_data(list,value);
    Doublenode* remove = list->end;
    list->end = get_previous(list->end);
    if(list->end == NULL) {
        list->start = NULL;
    } else {
        set_next(list->end,NULL);
    }
    free(remove);
    return value;
}

void free_list(List* list){
    Doublenode* cursor;
    while(list->start != NULL){
        cursor = list->start;
        list->start = get_next(list->start);
        free(cursor);
    }
    free(list);
}