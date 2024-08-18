# Stack

It is a structure similar to a list, with some limitations. It is only possible to access the last element that was pushed inside the queue. This sort of structures is called LIFO (Last In First Out).

## Structure

It contains an integer called `val` and a pointer to a stack called `next`:
```C
struct stack{
    int val;
    stack* next;
};
```

## Methods

It only contains five methods:
- `new_stack` takes an integer and returns a pointer to a stack;
- `free_stack` takes a pointer to a stack and frees it recursively;
- `spush` takes a pointer to a stack and an integer and puts the integer at the beginning of the stack. 
- `spop` takes a pointer to a stack and returns the first value that was added to it, and removes it from the stack
- `print_queue` takes a pointer to a stack and prints it to the terminal, in the form `X -> Y -> Z -> NULL;`