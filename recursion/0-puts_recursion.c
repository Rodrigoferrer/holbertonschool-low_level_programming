#include "main.h"
/**
 * @s: string
 * _puts_recursion: funcion que recorre un string en reversa
 * Return : void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
