#include "main.h"
#include <stdio.h>

/**
 * _puts - Function that prints a string
 * @str: String
 * Return: Void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
