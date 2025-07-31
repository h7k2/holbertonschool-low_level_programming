readme## Files

| Filename                | Description |
|-------------------------|-------------|
| `lists.h`               | Header file containing all necessary function prototypes and the `dlistint_t` struct definition |
| `0-print_dlistint.c`    | Prints all elements of a doubly linked list |
| `1-dlistint_len.c`      | Returns the number of nodes in a doubly linked list |
| `2-add_dnodeint.c`      | Adds a new node at the beginning of the list |
| `3-add_dnodeint_end.c`  | Adds a new node at the end of the list |
| `4-free_dlistint.c`     | Frees an entire doubly linked list |
| `5-get_dnodeint.c`      | Gets the nth node of the list (starting from 0) |
| `6-sum_dlistint.c`      | Returns the sum of all the data (n) in the list |
| `7-insert_dnodeint.c`   | Inserts a new node at a given index |
| `8-delete_dnodeint.c`   | Deletes a node at a specific index in the list |

## Compilation

To compile your code with a specific main file:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <file>.c -o <output>