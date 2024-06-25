#include "main.h"

/**
 * print the pairs
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (a % 2 != 0)
			continue;
		else
			_putchar(str[a]);
	}
	_putchar('\n');
}
