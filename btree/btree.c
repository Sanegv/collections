#include "btree.h"

btree* new_btree(int val){
    btree* b = malloc(sizeof(btree));
    b->left = NULL;
    b->right = NULL;
    b->val = val;

    return b;
}

void free_btree(btree* b){
    if(b->left)
        free_btree(b->left);
    if(b->right)
        free_btree(b->right);

    free(b);
}

void insert(btree* b, int val){
    if(val > b->val){
        if(b->right)
            insert(b->right, val);
        else
            b->right = new_btree(val);
    } else {
        if(b->left)
            insert(b->left, val);
        else 
            b->left = new_btree(val);
    }
}

btree* bfind(btree* b, int val){
    if(b->val == val)
        return b;

    return (val > b->val) ? bfind(b->right, val) : bfind(b->left, val);
}

int bcount(btree* b, int val){
    int c = 0;
    if(b->val == val)
        c++;

    if(b->left && val <= b->val)
        c += bcount(b->left, val);
    if(b->right && val > b->val)
        c += bcount(b->left, val);

    return c;
}

int bsize(btree* b){
    int c = 1;
    if(b->left)
        c += bsize(b->left);
    if(b->right)
        c += bsize(b->right);

    return c;
}

int bdepth(btree* b){
    int c = 1;
    int l = 0;
    int r = 0;
    if(b->left)
        l = bdepth(b->left);
    if(b->right)
        r = bdepth(b->right);

    (r > l) ? (c += r) : (c += l);
    return c;
}