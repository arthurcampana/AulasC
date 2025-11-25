#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Node {
    char name[50];
    struct Node* next;
} Node;

Node* vetorHash[41];


int funcaoHash(char key[]) {
    int i;
    char c;
    int value = 0;
    for(i = 0; key[i] != '\0'; i++) {
        c = key[i] >> i;
        value += (int)c; 
    }
    return value % 41;
}


void inicializarVetor(){
    for(int i=0;i < 41; i++){
        vetorHash[i] = NULL;
    }
}


void inserirNode(char key[]){
    int index = funcaoHash(key);

    Node* novoNode = (Node*)malloc(sizeof(Node));
    if(novoNode == NULL) return -1;

    novoNode->next = vetorHash[index];
    while(novoNode->next != NULL){
        novoNode->next = 
    }
}


