#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative if s1 < s2, 0 if s1 == s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((int)(s1[i]) - (int)(s2[i]));
		i++;
	}

	return ((int)(s1[i]) - (int)(s2[i]));
}

