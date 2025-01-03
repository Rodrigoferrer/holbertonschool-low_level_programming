#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - Helper function to check for prime factors.
 * @n: The number to check.
 * @i: The current divisor to test.
 * Return: 1 if n is prime, 0 if it is not.
 */

int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
