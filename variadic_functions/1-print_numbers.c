#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: String to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int current_value;

	va_start(args, n);
	current_value = 0;
	i = 0;

	if (separator == NULL || n == 0)
	{	va_end(args);
		return;
	}
	while (i < n)
	{
		current_value = va_arg(args, int);
		printf("%d", current_value);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
