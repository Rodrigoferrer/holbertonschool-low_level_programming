#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Function that prints a diagonal
 * @n: number of times the character / should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;
	
		
	if (n > 0)
	{	
	
		for (i = 1; i < n; i++)
		{
		if (i != 1)
		{	
			_putchar('\\');
			_putchar('\n');
		}	
		for (j = 1; j < i; j++)
		{
				_putchar(' ');
		}
	
	if (i == 1)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
}
	else
	_putchar('\n');
}
