# 0x1A. C - Hash tables

## Description

This project is focused on implementing and manipulating hash tables in C. A hash table is a data structure that offers fast access to elements using keys. It's commonly used in languages like Python (for dictionaries) and JavaScript (for objects).

The main goals of the project are:
- Understand what a hash function is and how it works
- Implement a real-world use of the djb2 hash function
- Handle collisions using chaining (linked lists)
- Store, retrieve, print, and delete data from a hash table

---

## Learning Objectives

By the end of this project, you will be able to explain:
- What is a hash function
- What makes a good hash function
- What is a hash table and how it works
- What is a collision and how to handle it using chaining
- What are the pros and cons of hash tables
- Common use cases for hash tables

---

## Requirements

- Ubuntu 20.04 LTS
- C90 standard (`gcc` with `-Wall -Werror -Wextra -pedantic -std=gnu89`)
- No global variables
- Max 5 functions per file
- Code must follow Betty style
- Header file: `hash_tables.h` (with include guards)

---

## Data Structures Used

```c
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
