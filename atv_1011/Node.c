#include "Node.h"
#include "Client.h"
struct DoubleNode_ {
    struct Client* cliente;
    struct DoubleNode* next;
    struct DoubleNode* previous;
};

DoubleNode* createNode(Client* cliente){
    DoubleNode* node = (DoubleNode*) malloc(sizeof(DoubleNode_));
    if(node){
        node->cliente = cliente;
        node->next = NULL;
        node->previous = NULL;
        return node;
    }
}

Doublenode* get_next(Doublenode* node){
    if(node == NULL) return NULL;
    return node->next;
}

void set_next(Doublenode* node, Doublenode* node_next){
    if(node == NULL) return NULL;
    node->next = node_next;
}

Doublenode* get_previous(Doublenode* node){
    if (node == NULL) return NULL;
    return node->previous;
}

void set_previous(Doublenode* node,Doublenode* node_previous){
    if(node == NULL) return NULL;
    node->previous = node_previous;
}

Client* get_client(Doublenode* node){
    if(node == NULL) return NULL;
    return node->cliente;
}