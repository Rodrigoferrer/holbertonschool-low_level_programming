#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - Functon that prints number from 0 to 100
 * @n: Numbers to be checked
 * Return: Void
 */

void fizz_buzz(int n)
{
	int i;

	for (i = n; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
		else if (i % 3 == 0)
		printf("Fizz");
		else if (i % 5 == 0)
		printf("Buzz");
		else
		printf("%d", i);
		if (i < 100)
		printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * Return: Void
 */

int main(void)
{
	int h;

	h = 1;

	fizz_buzz(h);
	return (0);
}
