# 0x15. C - File I/O

## Description

This project covers the basics of file input and output (I/O) in C using system calls. The goal is to understand how to open, read, write, and close files in a low-level way using POSIX system calls, and to get familiar with file descriptors and file permissions.

---

## Learning Objectives

At the end of this project, you will be able to explain:

- What are file descriptors and how to use them
- The purpose of the three standard file descriptors: `STDIN_FILENO`, `STDOUT_FILENO`, `STDERR_FILENO`
- How to use the system calls: `open()`, `close()`, `read()`, `write()`
- The meaning of file flags like `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- How to handle file permissions when creating files
- What a system call is and how it differs from a regular function call
- The importance of proper error handling when working with files

---

## Requirements

- Ubuntu 20.04 LTS
- `gcc` with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code must follow the Betty coding style
- Only allowed functions: `malloc`, `free`, `exit`, `read`, `write`, `open`, `close`
- No use of `printf`, `puts`, `fprintf`, `sprintf`, etc.
- All functions must be declared in a header file `main.h`
- Header files must be protected with include guards

---

## Files and Prototypes

| File                  | Prototype                                                           | Description                            |
|-----------------------|---------------------------------------------------------------------|----------------------------------------|
| `0-read_textfile.c`   | `ssize_t read_textfile(const char *filename, size_t letters);`      | Reads a file and prints to stdout      |
| `1-create_file.c`     | `int create_file(const char *filename, char *text_content);`        | Creates a file with given permissions  |
| `2-append_text_to_file.c` | `int append_text_to_file(const char *filename, char *text_content);` | Appends text to the end of a file |
| `3-cp.c`              | `Usage: cp file_from file_to`                                       | Copies content from one file to another |

---

## Usage

To compile:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file>.c <testfile>.c -o <output>