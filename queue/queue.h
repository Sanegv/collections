#ifndef DEF_QUEUE_H
#define DEF_QUEUE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct queue queue;

struct queue{
    int val;
    queue* next;
};

queue* new_queue(int val);

void free_queue(queue* q);

void qpush(queue* q, int val);

int qpop(queue* q);

void print_queue(queue* q);

#endif