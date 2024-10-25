#include "main.h"
#include <stdio.h>
/**
 * times_table - Function that prints table from 0 to 9
 * @i:
 * @j:
 * @product:
 * Return: void
 */

void times_table(void)
{
	int i, j, product;
	
	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{	
	product = i * j;
	_putchar (product + '0');
	if (product != 0)
	{
		_putchar(' ');
		_putchar(',');
	}
	if (product > 10)
	{	
	_putchar(product + '0');
	}
	}
	}
}
