#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle of '#' characters.
 * @size: The size (height) of the triangle.
 *
 * Description:
 * If size <= 0, the function only prints a newline.
 * Otherwise, it prints a right-aligned triangle of '#' with the
 * given size, followed by a newline for each row.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
