#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (0);
}  
