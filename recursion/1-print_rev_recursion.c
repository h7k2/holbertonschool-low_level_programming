#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: Pointer to the string to be reversed
 *
 * Description: Recursively moves to the end of the string, then
 *              prints characters in reverse order during the return phase.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
  _putchar(*s);
}
