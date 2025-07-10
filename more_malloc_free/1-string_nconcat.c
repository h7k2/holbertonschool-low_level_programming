#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated memory containing s1 followed by
 *         the first n bytes of s2, null-terminated.
 *         If malloc fails, returns NULL.
 *         If NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, total;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n >= j)
		n = j;

	total = i + n;

	concat = malloc(sizeof(char) * (total + 1));
	if (concat == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat[k] = s1[k];

	for (k = 0; k < n; k++)
		concat[i + k] = s2[k];

	concat[i + k] = '\0';

	return (concat);
}
