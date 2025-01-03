#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares size of two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Size of Strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
