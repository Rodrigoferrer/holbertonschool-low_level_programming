#include <stdio.h>

/**
 * main - Program that prints the alphabet in reverse
 * Return: 0 if succesfull
 */

int main (void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
