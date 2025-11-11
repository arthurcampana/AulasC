#include "client.h"
#include <string.h>
typedef struct Client_ {
    char name[30];
    char phone[12];
    char email[30];
};

Client* create_client(char* nome, char* phone, char* email) {
    Client* cliente = (Client*) malloc(sizeof(Client));
    if (cliente != NULL) { 
        strncpy(cliente->name, nome, sizeof(cliente->name) - 1);
        cliente->name[sizeof(cliente->name) - 1] = '\0'; 

        strncpy(cliente->phone, phone, sizeof(cliente->phone) - 1);
        cliente->phone[sizeof(cliente->phone) - 1] = '\0';

        strncpy(cliente->email, email, sizeof(cliente->email) - 1);
        cliente->email[sizeof(cliente->email) - 1] = '\0';

        return cliente;
    }
    return NULL; 
}

void show_client(Client* client){
    printf("nome: %s \nphone: %s \nemail: %s",client->name,client->phone,client->email);
}

