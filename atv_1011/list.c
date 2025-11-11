#include "list.h"
#include "client.h"
#include "Node.h"
#include <string.h>
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

int insert_client_end(List* list, Client* cliente){
    Doublenode* node = create_double_node(cliente);
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

void sort_list_for_name(List* list){
    if(list->start == NULL || list->end == NULL) return NULL;
    DoubleNode* cursorA;
    DoubleNode* cursorB;
    for(cursorA = list->end; cursorA != NULL;cursorA = get_previous(cursorA)){

        for(cursorB = get_previous(cursorA); cursorB != NULL; cursorB = get_previous(cursorB)){
            
            if (strcmp(get_client(cursorB)->name, get_client(cursorA)->name) > 0) {

                Client* temp = cursorB->cliente;
                cursorB->cliente = cursorA->cliente;
                cursorA->cliente = temp;
            }
        }
    }
        

}

Client* search_by_phone(List* list,char* phone){
    Doublenode* cursor = list->start;

    While(get_next(cursor) != NULL){
        Cliente* tmp = get_client(cursor)
        if (strcmp(tmp->phone, phone) == 0) {
            return tmp;
        }
        cursor = get_next(cursor)
    }
    return NULL;
}

void 


void free_list(List* list){
    Doublenode* cursor;
    while(list->start != NULL){
        cursor = list->start;
        list->start = get_next(list->start);
        free(cursor);
    }
    free(list);
}