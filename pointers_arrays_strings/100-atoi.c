#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0') * sign;
		/* Avancer le signe pour chaque chiffre directement */
		if (result > 0 && sign < 0)
			result *= -1;
		i++;
	}
	return (result);
}
