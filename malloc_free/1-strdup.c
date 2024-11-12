#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that duplicates a string using malloc
 * @str: String to be duplicated
 * Return: New string
 */

char *_strdup(char *str)
{
	char *strcopy;
	int i, len;

	len = 0;
	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	strcopy = malloc((len + 1) * sizeof(char));
	while (str[i] != '\0')
	{
		strcopy[i] = str[i];
		i++;
	}
	strcopy[i] = '\0';
	free(strcopy);
	return (strcopy);

}
