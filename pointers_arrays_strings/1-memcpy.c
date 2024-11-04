#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Function that copies memory area
 * @dest: String 2
 * @src: String 1
 * @n: n bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
