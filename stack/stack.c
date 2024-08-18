#include "stack.h"

stack* new_stack(int val){
    stack *s = malloc(sizeof(stack));
    s->next = NULL;
    s->val = val;

    return s;
}

void free_stack(stack* s){
    if(s->next)
        free_stack(s->next);
    free(s);
}

void spush(stack* s, int val){
    stack* new = new_stack(s->val);
    new->next = s->next;

    s->val = val;
    s->next = new;
}

int spop(stack* s){
    int tmp = s->val;
    stack* addr = s->next;

    s->next = addr->next;
    s->val = addr->val;

    free(addr);
    return tmp;
}

void print_stack(stack* s){
    if(!s){
        printf("NULL;\n");
        return;
    }
    printf("%d -> ", s->val);
    print_stack(s->next);
}
