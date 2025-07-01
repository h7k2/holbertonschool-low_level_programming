#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match
 *
 * Return: the number of bytes in s consisting only of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (!match)
			break;
	}

	return (i);
}  
