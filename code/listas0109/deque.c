#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

struct Deque_ {
    int* element;
    int quantity;
    int length;
};

Deque* create_deque(int length){
    Deque* deque = (Deque*) malloc(sizeof(Deque));
    if(deque != NULL){
        deque->element = (int*) malloc(sizeof(int) * length);
        if(deque->element != NULL){
            deque->quantity = 0;
            deque->length = length;
        } else {
            free(deque);
        }
    }
    return deque;
};

int insert_head(Deque* deque, int value){
    if(deque->quantity < deque->length){
        if(deque->element[0]){
            for(int i=deque->quantity - 1;i>0;i--){
                deque->element[i+1] = deque->element[i];
            };
            deque->element[0] = value;
            deque->quantity++;
            return 1;
        }
        else if(!deque->element[0]){
            deque->element[0] = value;
            deque->quantity++;
            return 1;
        }
        else return 0;
    }
}

int insert_tail(Deque* deque,int value){
    if(deque == NULL){return 0;}
    if(deque->quantity < deque->length){
        deque->element[deque->quantity] = value;
        deque->quantity++;
        return 1;
    }
    else return 0;
}

int remove_head(Deque* deque,int* value){
    if(deque == NULL){return 0;}
    if(deque->quantity > 0){
        *value = deque->element[0];
        for(int i=0;i<deque->quantity;i++){
            deque->element[i] = deque->element[i+1];
        }
        deque->quantity--;
        return 1;
    }
    else return 0;
}

int remove_tail(Deque* deque,int* value){
    if(!deque){return 0;}
    if(deque->quantity>0){
        *value = deque->element[deque->quantity - 1];
        deque->quantity--;
        return 1;
    }
    else return 0;
}

int get_head(Deque* deque,int* value){
    if(!deque){return 0;}
    if(deque->quantity > 0){
        *value = deque->element[0];
        return 1;
    }
    else return 0;
}

int get_tail(Deque* deque,int* value){
    if(!deque){return 0;}
    if(deque->quantity > 0){
        *value = deque->element[deque->quantity - 1];
        return 1;
    } else return 0;
}

void free_deque(Deque* deque){
    if(deque != NULL){
        free(deque->element);
        free(deque);
    }
}