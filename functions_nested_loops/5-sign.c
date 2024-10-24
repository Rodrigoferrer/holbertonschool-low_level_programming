#include "main.h"
#include <stdio.h>

/**
 *print_sign - Function that prints the sign of a number
 *@n: number to be checked
 *Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}	
