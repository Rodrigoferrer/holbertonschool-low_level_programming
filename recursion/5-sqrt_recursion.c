#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: number to return the square root
 * Return: Square root of n or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Helper function to find the square root
 * @n: number to find the square root of
 * @guess: current guess for the square root
 * Return: Square root of n or -1 if n does not have a natural square root
 */

int sqrt_helper(int n, int guess)
{
	if (n < 0)
		return (-1);
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);

	return (sqrt_helper(n, guess + 1));
}
