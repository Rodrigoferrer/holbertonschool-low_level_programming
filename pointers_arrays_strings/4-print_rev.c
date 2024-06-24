#include "main.h"
#include "2-strlen.c"
/**
 * function that prints a string backwards
 * return: always 0
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len >= 0) 
	{
		_putchar(s[len]);
		len--;
	}
		_putchar('\n');
}
