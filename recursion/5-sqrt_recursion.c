#include "main.h"

/**
 * _sqrt_helper - Helper function to find square root recursively
 * @n: The number to find the square root of
 * @i: The current candidate for square root
 *
 * Return: The natural square root, or -1 if it doesn't exist
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to compute the square root of
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
  return (_sqrt_helper(n, 0));
}

