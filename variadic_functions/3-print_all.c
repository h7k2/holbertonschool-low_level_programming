#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);

			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
			(format[i] == 'c') && printf("%c", va_arg(args, int));
			(format[i] == 'i') && printf("%d", va_arg(args, int));
			(format[i] == 'f') && printf("%f", va_arg(args, double));

			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
