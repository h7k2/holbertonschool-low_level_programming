#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	char *sep = " \t\n,;.!?\"(){}";

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a' - 'A';

	while (str[++i] != '\0')
	{
		int j = 0;

		while (sep[j] != '\0')
		{
			if (str[i - 1] == sep[j] && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 'a' - 'A';
				break;
			}
			j++;
		}
	}

	return (str);
}
