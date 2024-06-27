#include "main.h"
/**
 * @s: string
 * _print_rev_recursion - funcion que imprime un string al reves
 * Return: (void)
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{	
		return;
	}
	_print_rev_recursion(s +1);
	_putchar(*s);
}
