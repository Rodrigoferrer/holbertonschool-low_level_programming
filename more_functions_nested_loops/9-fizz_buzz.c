#include "main.h"
#include <stdio.h>

/**
 * main - Entry of the program
 * Return: Always 0
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
		if (n % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");
		if (n < 100)
		printf(" ");
	}
}

int main(void)
{
	int h;

	h = 1;

	fizz_buzz(h);
	return (0);
}
