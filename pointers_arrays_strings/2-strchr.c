#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a char in a string
 * @s: String
 * @c: char to be located
 * Return: Pointer to the first ocurrence of @c
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
