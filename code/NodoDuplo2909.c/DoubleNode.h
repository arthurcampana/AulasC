typedef struct Doublenode_ Doublenode;

Doublenode* create_double_node(int data);
Doublenode* get_next(Doublenode* node);
void set_next(Doublenode* node,Doublenode* node_next);
Doublenode* get_previous(Doublenode* node);
void set_previous(Doublenode* node,Doublenode* node_next);
int get_data(Doublenode* node,int* value);