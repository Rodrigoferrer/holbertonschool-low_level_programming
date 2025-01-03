#include "main.h"

/**
 * factorial - Function that returns the factorial of a number
 * @n: number to return the factorial
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (0);
}
