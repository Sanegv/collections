# Chained list

## Description

Called `list` in the code. It is a simple structure that can grow as long as the memory allows it to. It is somewhat less efficient than an array, since it is not possible to jump right to a specific element, forcing us to go through the whole structure.

## Structure 

Each element has an integer value named `val`, and a pointer to a list named `next`:

typedef struct list list;

```c
struct list{
    int val;
    list* next;
};
```

## Methods

It has the following functions:
- `new_list` takes an integer value and returns a pointer to a list;
- `free_list` takes a pointer to a list and frees it recursively;
- `append` takes a pointer to a list and an integer and adds it to a new element at the end of the list;
- `lremove` takes a pointer to a list and an integer and removes the first element with this value of the list. If there is no such element, nothing changes; 
- `lsize` takes a pointer to a list and returns an integer that is equal to the number of elements inside of it;
- `lcount`takes a pointer to a list and an integer, and returns an integer equal to the number of times the argument was found in the list;
- `print_list` takes a pointer to a list and prints it to the terminal, in the form `X -> Y -> Z -> NULL;`
- `is_sorted` takes a pointer to a list and returns 1 if it is sorted, 0 otherwise;
- `lsort` takes a pointer to a list and sorts it.
