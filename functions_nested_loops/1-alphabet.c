#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Function that prints the alphabet in lowercase
 * Return: Void
 */

void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
