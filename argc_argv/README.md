# argc and argv - Command Line Arguments in C

## Overview

This project focuses on understanding and using command line arguments in C programs. Command line arguments allow users to pass input to a program when they run it, enabling dynamic behavior without changing the code.

---

## Learning Objectives

By the end of this project, you should be able to:

- Use arguments passed to your program via the command line
- Understand the two common prototypes of `main` and when to use each
- Handle unused variables or parameters using `__attribute__((unused))` or casting to `(void)`
- Compile your programs cleanly with proper flags and without warnings/errors

---

## Requirements

- Use editors: vi, vim, emacs
- Compile on Ubuntu 20.04 LTS using gcc with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All source files must end with a new line
- Use Betty style for code formatting and documentation (checked by `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- Include prototypes of all your functions and the `_putchar` prototype in `main.h`
- Push your header file along with your source code
- The use of the standard library is allowed

---

## Project Tasks

### 0. It ain't what they call you, it's what you answer to

Write a program that prints its own name, followed by a new line.

- If the program is renamed, it should print the new name without recompilation.
- The printed name should include the path used to run the program.

### 1. Silence is argument carried out by other means

Write a program that prints the number of arguments passed to it (excluding the program name).

### 2. The best argument against democracy is a five-minute conversation with the average voter

Write a program that prints all arguments it receives, including the program name.

- Print one argument per line.

### 3. Neither irony nor sarcasm is argument

Write a program that multiplies two numbers passed as arguments.

- If the program does not receive exactly two arguments, print `Error` and return `1`.
- You can assume the multiplication result fits in an integer.

### 4. To infinity and beyond

Write a program that adds positive numbers passed as arguments.

- Print the sum followed by a new line.
- If no numbers are passed, print `0`.
- If any argument contains non-digit characters, print `Error` and return `1`.

---

## How to Compile

Example compile command for a source file `file.c`:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output
