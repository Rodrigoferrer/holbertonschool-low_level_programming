#include "main.h"
#include "stdio.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: String 2
 * @src: String 1
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{	dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
