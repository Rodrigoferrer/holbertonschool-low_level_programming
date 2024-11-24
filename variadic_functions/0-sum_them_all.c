#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: First parameter (probably the quantity)
 * Return: The sum of all
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum, current_value;

	i = 0;
	sum = 0;
	current_value = 0;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return (0);
	}
	while (i < n)
	{
		current_value = va_arg(args, int);
		sum = sum + current_value;
		i++;
	}
	va_end(args);
	return (sum);
}
