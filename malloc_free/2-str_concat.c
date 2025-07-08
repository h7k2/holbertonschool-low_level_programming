#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in a newly allocated memory space
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, j = 0, len1 = 0, len2 = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);

	for (k = 0; s1[k]; k++)
		new_str[i++] = s1[k];

	for (k = 0; s2[k]; k++)
		new_str[i++] = s2[k];

	new_str[i] = '\0';

	return (new_str);
}
