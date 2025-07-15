#include "function_pointers.h"

/**
 * print_name - prints a name using a function passed as a pointer
 * @name: the name to be printed
 * @f: a pointer to a function that takes a char * as parameter
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
