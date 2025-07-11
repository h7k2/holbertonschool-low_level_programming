# C - Structures, typedef

## Project Overview

This project focuses on understanding and using `struct` in C, as well as the `typedef` keyword. The goal is to learn how to define and manipulate structures, use pointers to structures, and manage dynamic memory associated with them.

## Learning Objectives

At the end of this project, you will be able to:

- Explain what structures are and when/how to use them.
- Use `typedef` to simplify complex type declarations.
- Initialize and print struct members.
- Dynamically allocate memory for structures.
- Free memory correctly to avoid leaks.

## Requirements

- All code files are compiled on Ubuntu 20.04 LTS with `gcc` using the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables.
- No more than 5 functions per file.
- Only allowed C standard functions: `printf`, `malloc`, `free`, and `exit`.
- All header files must have include guards.
- All code follows the **Betty style guide**.

## Files and Descriptions

| File           | Description                                                              |
|----------------|--------------------------------------------------------------------------|
| `dog.h`        | Header file that defines the `struct dog` and `typedef dog_t`.          |
| `1-init_dog.c` | Function to initialize a variable of type `struct dog`.                 |
| `2-print_dog.c`| Function to print the elements of a `struct dog`.                       |
| `4-new_dog.c`  | Function that creates a new dog, copying `name` and `owner` strings.    |
| `5-free_dog.c` | Function that frees memory allocated for a `dog_t` struct.              |

## Compilation Example

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c -o a
./a
