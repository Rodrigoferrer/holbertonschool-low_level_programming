#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - Function finds the first occurrence
 * of the substring needle in the string haystack
 * @haystack: String 1
 * @needle: String 2
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr = "";
	char *ptr2 = "";

	while (*haystack != '\0')
	{
		ptr = haystack;
		ptr2 = needle;
		while (*ptr != '\0' && *ptr2 != '\0' && *ptr == *ptr2)
		{
			ptr++;
			ptr2++;
		}
		if (*ptr2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
