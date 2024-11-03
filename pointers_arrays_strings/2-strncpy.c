#include "main.h"
#include "stdio.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Where the string is going to be copied
 * @src: String to be copied
 * @n: Number of characters to be copied
 * Return: @*dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
