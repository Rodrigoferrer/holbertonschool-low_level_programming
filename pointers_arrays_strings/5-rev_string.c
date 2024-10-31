#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function that reverses a string
 * @s: String
 * Return: Void
 */

void rev_string(char *s)
{
	int len, i;
	char rev[500];

	len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	for (i = 0; i < len; i++)
	{
	rev[i] = s[len -1 -i];
	}
	rev[len] = '\0';
	for (i = 0; i < len; i++)
	{
	s[i] = rev[i];
	}
	s[len] = '\0';
}
