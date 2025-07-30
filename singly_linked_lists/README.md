# 0x12. C - Singly linked lists

## Description

This project introduces the concept of **singly linked lists** in C.  
It covers how to create, manipulate, and free nodes in a linked list using dynamic memory.  
A singly linked list is a linear data structure where each node points to the next one.

---

## Learning Objectives

- What is a linked list
- How to build and traverse a linked list
- How to add nodes at the beginning and end
- How to free the memory used by a list
- Differences between arrays and linked lists

---

## Data Structure Used

```c
/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: structure for singly linked list node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;