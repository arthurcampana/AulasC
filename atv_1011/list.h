typedef struct List_ List;
List* create_list();
int insert_client_end(List* list,int value);
void free_list(List* list);