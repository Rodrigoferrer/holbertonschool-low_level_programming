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
	int lens1, lens2;

	lens1 = 0;
	lens2 = 0;

	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;
	if (lens1 < lens2)
		return (lens1 * -1);
	if (lens1 == lens2)
		return (lens1);
	else
		return (0);
}
