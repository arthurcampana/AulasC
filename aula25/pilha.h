typedef struct Stack_ Stack;

Stack* create_stack(int length);

int push(Stack* stack, int value);
int pop(Stack* stack, int* value);
int peek(Stack* stack, int* value);
void free_stack(Stack* stack);