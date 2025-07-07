# 0x0A. C - malloc, free

## 📘 Description

This project introduces **dynamic memory allocation** in the C programming language using the standard library functions `malloc` and `free`.

You will learn how to:
- Allocate memory on the heap at runtime
- Manage memory properly
- Avoid memory leaks using tools like **Valgrind**

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain the following concepts **without external help**:

### General

- The difference between automatic and dynamic memory allocation
- What `malloc` and `free` are and how to use them
- Why and when to use `malloc`
- How to use **Valgrind** to check for memory leaks

---

## 📝 Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on Ubuntu 20.04 LTS using:  
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- Code must follow the **Betty coding style**
- No use of global variables
- No more than 5 functions per file
- Only `malloc` and `free` from the C standard library are allowed
- A `README.md` and `main.h` are mandatory

---

## 🔧 Files and Prototypes

| File              | Function          | Description |
|-------------------|-------------------|-------------|
| `0-create_array.c`| `char *create_array(unsigned int size, char c);` | Allocates memory for an array of chars and initializes with a specific character |
| `1-strdup.c`      | `char *_strdup(char *str);` | Returns a pointer to a duplicated string (dynamically allocated) |
| `2-str_concat.c`  | `char *str_concat(char *s1, char *s2);` | Concatenates two strings into newly allocated memory |
| `3-alloc_grid.c`  | `int **alloc_grid(int width, int height);` | Allocates a 2D array (grid) of integers, initialized to 0 |
| `4-free_grid.c`   | `void free_grid(int **grid, int height);` | Frees memory allocated by `alloc_grid` |

---

## 🧪 Example Usage

```c
char *buffer = create_array(10, 'X');
// buffer contains: XXXXXXXXXX

char *copy = _strdup("Holberton");
// copy contains: "Holberton" in a new memory space

char *joined = str_concat("Hello, ", "World!");
// joined contains: "Hello, World!"

int **grid = alloc_grid(3, 2);
// Creates a 2x3 grid initialized with 0s
free_grid(grid, 2);
// Frees all memory