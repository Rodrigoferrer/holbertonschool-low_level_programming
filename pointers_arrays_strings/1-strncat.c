#include "main.h"
#include <stdio.h>

/**
 * _strncat - Function similar to strcat, but concatenates based on size of n
 * @dest: String 2
 * @src: String 1
 * @n: Size of string 1
 * Return: @*dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < n)
	{	dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
