#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings
 * @separator: str to be printed between str
 * @n: number of strings passed to the function
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *current;

	va_start(args, n);
	i = 0;

	while (i < n)
	{
		current = va_arg(args, char *);
		if (current == NULL)
		{
			printf("nil");
		}
		else
		{
		printf("%s", current);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
