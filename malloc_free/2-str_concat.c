#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: String
 * @s2: String 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int len1, len2, i, j;

	if (s1 == NULL || s2 == NULL)
		return ("");
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	string = malloc((len1 + len2 + 1) * sizeof(char));
	if (string == NULL)
		return ("");
	for (i = 0; i < len1; i++)
		string[i] = s1[i];
	for (j = 0; j < len2; j++)
		string[len1 + j] = s2[j];
	string[len1 + len2] = '\0';
	return (string);
	free (string);
}
