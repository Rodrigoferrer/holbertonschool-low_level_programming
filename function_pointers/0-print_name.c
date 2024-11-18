#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: Where name is saved
 * @f: Function pointer
 * @x:
 * Return: void
 */

void print_name(char *name, void (*f)(char *x))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
