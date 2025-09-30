#include <stdlib.h>
#include "DoubleNode.h"

struct Doublenode_ {
    int data;
    struct Doublenode_ *next;
    struct Doublenode_ *previous;
};

create_double_node(int value){
    Doublenode* node = (Doublenode*) mallloc(sizeof(Doublenode));
    if(node != NULL){
        node->data = value;
        node->next =  NULL;
        node->previous  = NULL;
    }
    return node;
}

Doublenode* get_next(Doublenode* node){
    if(node == NULL) return 1;
    return node->next;
}

void set_next(Doublenode* node, Doublenode* node_next){
    if(node == NULL) return 1;
    node->next = node_next;
}

Doublenode* get_previous(Doublenode* node){
    if (node == NULL) return 1;
    return node->previous;
}

void set_previous(Doublenode* node,Doublenode* node_previous){
    if(node == NULL) return 1;
    node->previous = node_previous;
}

int get_data(Doublenode* node,int* data){
    if(node == NULL) return 1;
    *data = node->data;
}