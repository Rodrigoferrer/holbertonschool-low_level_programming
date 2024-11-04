#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Function that that changes lowercase to uppercase
 * @str: String
 * Return: Char
 */

char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
}
