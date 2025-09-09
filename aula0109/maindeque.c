#include "deque.h"
#include <stdio.h>

int main(){
    Deque* deque;
    deque = create_deque();
    int i;
    int value;
    for(i=0; i< 5; i++){
        if(insert_head(deque, (i+1) * 2)){
            printf("inseriu no inicio -> %d\n",(i+1)*2);
        } else {
            printf("erro na insercao");
        }
    }
    for(i = 0; i < 5;i++){
        if(insert_tail(deque, &value))
        {
            printf("insercao no final: %d\n",&value);
        } else {printf("deu nao pae");}
    }
    free_deque(deque);
};

