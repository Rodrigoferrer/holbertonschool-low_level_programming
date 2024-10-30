#include "main.h"
#include <stdio.h>

/**
 * print_square - Function that prints a square
 * @size: Parameter to be checked
 * Return: Void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
