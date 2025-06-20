#include <stdio.h>

/**
 * main - show 0 à  without char
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
	putchar(n + '0');
	n++;
	}
	putchar('\n');

	return (0);
}

