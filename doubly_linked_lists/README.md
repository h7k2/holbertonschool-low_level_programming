# C - Doubly linked lists

## Description

This project is part of the Holberton School low-level programming curriculum. It focuses on implementing and manipulating **doubly linked lists** in C. You will learn how to build your own data structure, traverse it in both directions, and manage memory properly.

## Learning Objectives

By the end of this project, you should be able to:

- Explain what a doubly linked list is
- Traverse a doubly linked list forward and backward
- Add or remove nodes at various positions in a doubly linked list
- Search for nodes and retrieve data
- Manage memory allocation and avoid leaks

## Requirements

- Ubuntu 20.04 LTS
- C standard: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- Only the following functions from the C standard library are allowed: `malloc`, `free`, `printf`, and `exit`
- No use of global variables
- Betty style code (betty-style.pl and betty-doc.pl)

## Data Structure Used

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;