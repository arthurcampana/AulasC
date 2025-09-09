#include "task.h"

struct Task_ {
    int id;
    char nome[21];
    char descricao[101];
};

Task* create_task(int id,char* nome,char* descricao){
    Task* task = (Task*) malloc(sizeof(Task));
    if(task){
        task->id = id;

       strncpy(task->nome,nome,sizeof(task->nome) - 1);
       task->nome[sizeof(task->nome) - 1] = '\0';

       strncpy(task->descricao,descricao,sizeof(task->descricao) - 1);
       task->descricao[sizeof(task->descricao) - 1] = '\0';
       return task;
    } else free(task);
};

void show_task(Task* task){
    if(task){
        printf("id: %d Tarefa: %s, Descricao: %s\n",task->id,task->nome,task->descricao);
    } else {printf("erro!");}
};

void free_task(Task* task){
    free(task);
};