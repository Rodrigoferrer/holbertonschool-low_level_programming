#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - Function that prints number from 0 to 10
 * @n: Parameter to be checked
 * Return: Void
 */

void fizz_buzz(int n)
{
	int i;

	for (i = n; i <= 100; i++)
	{
		if (n % 3 == 0)
		printf("Fizz");
		if (n % 5 == 0)
		printf("Buzz");
		if (n % 3 == 0 && n % 5 == 0)
		if (n < 100)
		printf("\n");
	}
}
/**
 * main - Entry of the program
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = 1;

	fizz_buzz(n);
	return (0);
}
