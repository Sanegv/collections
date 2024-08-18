#ifndef DEF_STACK_H
#define DEF_STACK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack stack;

 struct stack{
    int val;
    stack* next;    
};

stack* new_stack(int val);

void free_stack(stack* s);

void spush(stack* s, int val);

int spop(stack* s);

void print_stack(stack* s);

#endif