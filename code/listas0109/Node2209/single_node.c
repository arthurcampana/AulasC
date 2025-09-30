#include "single_node.h"
#include <stdlib.h>

struct Node_ {
    int data;
    struct Node_ *next;
};

Node* create_node(int data){
    Node* node = (Node*) malloc(sizeof(Node));
    if(node != NULL){
        node->data = data;
        node->next = NULL;
    }
}

