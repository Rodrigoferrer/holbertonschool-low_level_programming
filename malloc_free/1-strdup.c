#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that duplicates a string using malloc
 * @str: String to be duplicated
 * Return: New string
 */

char *_strdup(char *str)
{
	char *strcopy;
	int i;

	i = 0;

	if (str == NULL)
		return (NULL);
	strcopy = (char *)malloc(sizeof(char));
	while (str[i] != '\0')
	{
		strcopy[i] = str[i];
		i++;
	}
	strcopy[i] = '\0';
	return (strcopy);
	free(strcopy);
}
