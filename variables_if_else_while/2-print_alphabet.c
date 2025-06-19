#include <stdio.h>

/**
 * main - Entry point
 * Description:
 * This program displays all lowercase letters from 'a' to 'z',
 * followed by a newline character. It uses only the putchar function
 * exactly twice, as required by the task instructions.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}

