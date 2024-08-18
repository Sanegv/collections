#include "list/list.h"

int main(){
    list* l = new_list(4);
    append(l, 42);
    append(l, 15);
    append(l, 16);
    append(l, 23);
    append(l, 8);

    lsort(l);
    print_list(l);
    printf("list is ");
    printf((is_sorted(l)) ? "" : "not ");
    printf("sorted\n");

    free_list(l);
    return 0;
}