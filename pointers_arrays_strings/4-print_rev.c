#include "main.h"
#include <stdio.h>

/**
 * print_rev - Function that prints a string in reverse
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
