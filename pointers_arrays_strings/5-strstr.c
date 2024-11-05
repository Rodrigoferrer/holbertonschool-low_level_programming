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
	char *ptr = 0;

	while (*haystack)
	{
		ptr = needle;
		while (*ptr)
		{
			if (*haystack == *ptr)
				return (haystack);

			ptr++;
		}
		haystack++;

	}
	return (NULL);
}
