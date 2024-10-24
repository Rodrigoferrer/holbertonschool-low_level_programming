#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Function that prints the alphabet in lowercase 10 times
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int contador, i;

		for (contador = 0; contador < 10 ; contador++)
		{
			i = 0;
			while (str[i] != '\0')
			{
				_putchar(str[i]);
				i++;
			}
		}
		_putchar ('\n');
}
