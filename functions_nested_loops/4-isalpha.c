#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha - Function that checks if a character is uppercase
 *@c: character to be checked
 *Return: 1 if uppercase 0 if not
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
