#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function that copies a string
 * @dest: Destination
 * @src: Source
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0
	
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
	src[i] = dest[i]
	}
}
