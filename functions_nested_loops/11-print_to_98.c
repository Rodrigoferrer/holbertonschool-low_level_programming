#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints number n to 98 followed by a '\n'
 * @n: numbers from 0 to 98
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
	{
		n++;
	}
	else
	{
		n--;
	}
	}
	_putchar('\n');
}
