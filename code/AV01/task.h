#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Task_ Task;
Task* create_task(int i,char* nome,char* descricao);
void show_task(Task* task);
void free_task(Task* task);