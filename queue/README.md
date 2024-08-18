# Queue

It is a structure similar to a list, with some limitations. It is only possible to access the first element that was pushed inside the queue. This sort of structures is called FIFO (First In First Out).

## Structure

It contains an integer called `val` and a pointer to a queue called `next`:
```C
struct queue{
    int val;
    queue* next;
};
```

## Methods

It only contains five methods:
- `new_queue` takes an integer and returns a pointer to a queue;
- `free_queue` takes a pointer to a queue and frees it recursively;
- `qpush` takes a pointer to a queue and an integer and puts the integer at the end of the queue. 
- `qpop` takes a pointer to a queue and returns the first value that was added to it, and removes it from the queue
- `print_queue` takes a pointer to a queue and prints it to the terminal, in the form `X -> Y -> Z -> NULL;`