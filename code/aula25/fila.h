typedef struct Queue_ Queue;
Queue* create_queue();
int add(Queue* queue, int value);
int next(Queue* queue, int* value);
int peek(Queue* queue, int* value);
void free_queue(Queue* queue);