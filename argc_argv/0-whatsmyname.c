#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: Number of arguments (not used).
 * @argv: Array of argument strings.
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
