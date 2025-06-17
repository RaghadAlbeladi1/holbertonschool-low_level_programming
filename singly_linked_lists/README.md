# ð Singly Linked Lists

[![C Project](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Linked List](https://img.shields.io/badge/Data%20Structure-Linked%20List-brightgreen)](https://en.wikipedia.org/wiki/Linked_list)

##   Description

This project focuses on implementing and manipulating **Singly Linked Lists** using C.  
It covers creating nodes, traversing the list, adding nodes to the beginning and end, and freeing memory.

---

## ðProject Structure

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

This structure defines a node that holds:

A string (str)

The length of the string (len)

A pointer to the next node (next)

## Tasks Covered

| File              | Function        | Description                          |
|-------------------|-----------------|--------------------------------------|
| `0-print_list.c`  | `print_list`    | Prints all elements in a linked list |
| `1-list_len.c`    | `list_len`      | Returns the number of nodes in the list |
| `2-add_node.c`    | `add_node`      | Adds a new node at the beginning     |
| `3-add_node_end.c`| `add_node_end`  | Adds a new node at the end           |
| `4-free_list.c`   | `free_list`     | Frees all nodes in the list          |
| `lists.h`         | Header file     | Contains prototypes and struct definition |
