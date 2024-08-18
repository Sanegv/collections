#ifndef DEF_BTREE_H 
#define DEF_BTREE_H 

#include <stdlib.h>

typedef struct btree btree;

struct btree
{
    int val;
    btree* left;
    btree* right;
};

btree* new_btree(int val);

void free_btree(btree* b);

void insert(btree* b, int val);

btree* bfind(btree* b, int val);

int bcount(btree* b, int val);

int bsize(btree* b);

int bdepth(btree* b);


#endif