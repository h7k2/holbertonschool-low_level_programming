#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
	putchar(c);
	c++;
	}

	c = 'a';
	while (c <= 'f')
	{
	putchar(c);
	c++;
	}

	putchar('\n');

	return (0);
}

