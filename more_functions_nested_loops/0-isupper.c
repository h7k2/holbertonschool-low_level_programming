#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if a character is big
 * @c: Charactere | verifie
 *
 * Return 1 if AZ else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
