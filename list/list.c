#include "list.h"

list* new_list(int val){
    list* l = malloc(sizeof(list));
    l->next = NULL;
    l->val = val;

    return l;
}

void append(list* l, int val){
    if(l->next){
        append(l->next, val);
        return;
    }

    l->next = new_list(val);
}

void lremove(list* l, int val){
    if(l->val == val){
        if(l->next){
            list* tmp = l->next;
            l->val = tmp->val;
            l->next = tmp->next;
            free(tmp);
        } else
            free(l);
        return;
    }

    if(l->next){
        if(l->next->val == val){
            list* tmp = l->next;
            l->val = tmp->val;
            l->next = tmp->next;
            free(tmp);
        } else
            lremove(l->next, val);
    }
}

list* lfind(list* l, int val){
    if(val == l->val)
        return l;

    if(l->next == NULL)
        return NULL;

    return lfind(l->next, val);
}

int lcount(list* l, int val){
    int c = 0;
    if(l->val == val)
        c++;
    
    if(l->next)
        c += lcount(l->next, val);

    return c;
}

void print_list(list* l){
    if(l == NULL){
        printf("NULL;\n");
        return;
    }

    printf("%d -> ", l->val);

    print_list(l->next);
}

int is_sorted(list* l){
    if(l->next == NULL)
        return 1;

    if(l->val > l->next->val)
        return 0;

    return is_sorted(l->next);
}

int lsize(list* l){
    int c = 1;
    if(l->next)
        c += lsize(l->next);

    return c;
}

void lsort(list* l){
    while(!is_sorted(l)){
        if(l->val > l->next->val){
            int tmp = l->val;
            l->val = l->next->val;
            l->next->val = tmp;
        }
        lsort(l->next);
    }
}

void free_list(list* l){
    if(l->next)
        free_list(l->next);
    free(l);
}