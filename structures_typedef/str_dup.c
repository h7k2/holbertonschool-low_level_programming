#include <stdlib.h>

/**
 * str_dup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL on failure
 */
char *str_dup(const char *str)
{
	int i, len;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
