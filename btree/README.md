# Binary tree

## Description

Called `btree` in the code. This is basically a chained list, with two sons instead of one.
It grants faster access to elements inside, to the cost of more complexity.

## Structure

Each node contains an integer value called `val`, and two pointers to `btree`s, called `left` and `right`:
```C
struct btree
{
    int val;
    btree* left;
    btree* right;
};
```
The tree is always sorted: the value of the left son of a node is always inferior or equals to the value of the node, and the value of the right son is always greater than the value of the node.

## Methods

It has the following functions:
- `new_btree` takes an integer and returns a pointer to a btree;
- `free_btree` takes a pointer to a btree and frees it recursively;
- `insert` takes a pointer to a btree and an integer, and inserts the integer in the btree.
- `bfind` takes a pointer to a btree and returns a pointer to the first occurence, or `NULL` if there is no occurence;
-  `bcount` takes a pointer to a btree and an integer, and returns the amount of times this integer is found in the tree;
- `bsize` takes a btree and returns an integer that is equal to the number of nodes in this tree;
- `bdepth` takes a btree and returns an integer that is equal to the length of the deepest branch of this tree. 