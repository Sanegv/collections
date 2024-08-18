#ifndef DEF_LIST_H
#define DEF_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct list list;

struct list{
    int val;
    list* next;
};

list* new_list(int val);

void append(list* l, int val);

void lremove(list* l, int val);

list* lfind(list* l, int val);

int lcount(list* l, int val);

int lsize(list* l);

void print_list(list* l);

int is_sorted(list* l);

void lsort(list* l);

void free_list(list* l);

#endif