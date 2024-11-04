#include "main.h"
#include <stdio.h>

/**
 * _memset - Function that fills memory with a constant byte
 * @s: String
 * @b: Variable
 * @n: Number of times to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] =  b;
		i++;
	}
	return (s);
}
