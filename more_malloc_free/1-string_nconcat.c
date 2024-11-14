#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings using malloc
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: NULL when fails || ptr if success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *ptr;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
		n = len2;
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
	ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
