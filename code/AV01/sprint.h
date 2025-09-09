#include <stdio.h>
#include <stdlib.h>
#include "task.h"
typedef struct Backlog_ Backlog;
Backlog* create_backlog();
int add(Backlog* backlog,Task* task);
Task* next(Backlog* backlog);
int del(Backlog* backlog);
void free_backlog(Backlog* backlog);
