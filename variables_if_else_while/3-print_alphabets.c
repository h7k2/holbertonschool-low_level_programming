#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabet followed by a newline
 * Return: Always 0
 */
int main(void)
{
	char c;
	{
	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	}
	{
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	}
	{
	putchar('\n');
	}
	return (0);
}

