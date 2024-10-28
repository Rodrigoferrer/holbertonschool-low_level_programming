#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function that checks if c is a digit from 0 to 9
 * @c: digit to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
