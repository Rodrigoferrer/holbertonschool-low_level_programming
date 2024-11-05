#include "main.h"
#include <stdio.h>

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String 1
 * @accept: String 2
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accep)

	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
			break;

		s++;
	}
	return (count);
}
