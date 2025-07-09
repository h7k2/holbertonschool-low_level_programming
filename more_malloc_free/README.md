# 0x0C. C - More malloc, free

## Description

This project focuses on advanced dynamic memory allocation in C. You will implement functions that allocate, initialize, and manage memory manually using `malloc` and `free`. You'll also recreate behavior similar to `calloc` and `realloc`, without using those functions directly. Understanding and mastering these techniques is essential for writing efficient and safe C programs.

---

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without relying on external resources:

- How to use the `exit` function
- What are `calloc` and `realloc` from the standard library and how to implement their behavior
- How to allocate memory dynamically using `malloc`
- How to handle memory allocation errors properly

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 20.04 LTS with `gcc` using flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables
- No more than 5 functions per file
- Only the following standard C functions are allowed: `malloc`, `free`, and `exit`
- You are allowed to use `_putchar`
- All code must follow the **Betty coding style**
- A `README.md` file is mandatory
- All prototypes must be in a header file named `main.h`

---

## Files and Prototypes

### 0-malloc_checked.c
Allocates memory using `malloc`, exits with status 98 on failure.
```c
void *malloc_checked(unsigned int b);

