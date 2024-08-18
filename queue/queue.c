#include "queue.h"

queue* new_queue(int val){
    queue *q = malloc(sizeof(queue));
    q->next = NULL;
    q->val = val;

    return q;
}

void free_queue(queue* q){
    if(q->next)
        free_queue(q->next);
    free(q);
}

void qpush(queue* q, int val){
    if(q->next)
        qpush(q->next, val);
    else
        q->next = new_queue(val);
}

int qpop(queue* q){
    int tmp;
    if(q->next){
        if(q->next->next == NULL){
            tmp = q->next->val;
            free(q->next);
            q->next = NULL;
        } else
            tmp = qpop(q->next);
    } else{
        tmp = q->val;
        free(q);
    }
    
    return tmp;
}

void print_queue(queue* q){
    if(q == NULL){
        printf("NULL;\n");
        return;
    }

    printf("%d -> ", q->val);
    print_queue(q->next);
}