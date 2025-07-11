#include <stdlib.h>

/**
 * str_dup - duplicates a string by allocating memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL if fails
 */
char *str_dup(const char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
