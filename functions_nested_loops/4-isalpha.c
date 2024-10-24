#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isalpha - Function that checks if a character is uppercase
 *@c: character to be checked
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
