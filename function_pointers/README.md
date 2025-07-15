# C - Function Pointers

## Description

This project is focused on **function pointers in C**, a powerful feature that allows the creation of flexible, reusable, and modular code. The exercises in this project cover:

- Basic use of function pointers
- Executing a function on each element of an array
- Searching elements using a comparison function
- Building a simple calculator using function pointers

## Learning Objectives

At the end of this project, you should be able to:

- Understand what function pointers are and how to use them
- Explain what a function pointer actually holds
- Know where a function pointer points to in virtual memory

## Requirements

- Ubuntu 20.04 LTS
- GCC with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables
- Max 5 functions per file
- Only allowed functions: `malloc`, `free`, `exit`, `_putchar`
- Respect Betty coding style

## Project Structure

### Task 0: `print_name`
Prints a name using a function passed as a pointer.

Prototype:
```c
void print_name(char *name, void (*f)(char *));
