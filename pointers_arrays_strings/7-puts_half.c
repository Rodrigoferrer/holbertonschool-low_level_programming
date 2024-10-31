#include "main.h"
#include <stdio.h>

/**
 * puts_half - Function that prints half of a string
 * @str: String
 * Return: Void
 */

void puts_half(char *str)
{
	int len, i;
	int mitad_len;


	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	mitad_len = len / 2;
	else
	mitad_len = len / 2 + 1;
	for (i = mitad_len; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
