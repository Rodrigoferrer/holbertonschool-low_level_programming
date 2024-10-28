#include "main.h"
#include <stdio.h>

/**
 * _isupper - Function that checks for uppercase letter
 * @c: parameter to be checked if uppercase in ascii mode
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
