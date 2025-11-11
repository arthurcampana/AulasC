typedef struct DoubleNode_ Doublenode;
DoubleNode* createNode(Client* cliente);
Doublenode* get_next(Doublenode* node);
void set_next(Doublenode* node,Doublenode* node_next);
Doublenode* get_previous(Doublenode* node);
void set_previous(Doublenode* node,Doublenode* node_next);
Client* get_client(Doublenode* node);