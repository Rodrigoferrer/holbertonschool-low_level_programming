#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day of
 * Return: Void
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
		if (h1 == 2 && h2 > 3)
			break;
		for (m1 = 0; m1 < 6; m1++)
		{
		for (m2 = 0; m2 < 10; m2++)
		{

		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m1 + '0');
		_putchar(m2 + '0');
		_putchar('\n');
	}
		}
		}
		}
}
