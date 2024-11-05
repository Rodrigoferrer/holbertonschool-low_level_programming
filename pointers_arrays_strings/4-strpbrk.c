#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strpbrk - Function locates the first occurrence in the string s of any
 * of the bytes in the string accept
 * @s: String 1
 * @accept: String 2
 * Return: Pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = 0;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}
		s++;
	}
	return (NULL);
}
