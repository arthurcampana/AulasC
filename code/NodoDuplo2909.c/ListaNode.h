typedef struct List_ List;
List* create_list();
int inserir_inicio(List* list,int value);
int inserir_posicao(List* list,int position,int value);
int inserir_fim(List* list,int value);
int* remover_inicio(List* list,int* value);
int* remover_posicao(List* list,int position, int* value);
int* remover_fim(List* list,int* value);
void free_list(List* list);