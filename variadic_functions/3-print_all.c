#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *str;
	char type;

	va_start(args, format);

	while (format && format[i])
	{
		type = format[i];

		if (type == 'c' || type == 'i' || type == 'f' || type == 's')
		{
			printf("%s", sep);
			type == 'c' && printf("%c", va_arg(args, int));
			type == 'i' && printf("%d", va_arg(args, int));
			type == 'f' && printf("%f", va_arg(args, double));
			if (type == 's')
			{
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nil)");
			}
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
