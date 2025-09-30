typedef struct Deque_ Deque;
Deque* create_deque();
int inserir_inicio(Deque* deque,int value);
int inserir_fim(Deque* deque,int value);
int* remover_inicio(Deque* deque,int* value);
int* remover_fim(Deque* deque,int* value);
void free_deque(Deque* deque);