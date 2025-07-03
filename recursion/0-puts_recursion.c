#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: Recursively prints each character of the string,
 *              then adds a new line at the end.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
