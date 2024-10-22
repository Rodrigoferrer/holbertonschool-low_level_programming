#include <stdio.h>

/**
 * main - Program that prints hexadecimal
 * Return: 0 if succesfull
 */

int main(void)
{
	char alph = 'a';
	int num = 0;

	while (num <= 9)
	{
		putchar (num + '0');
	num++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
	alph++;
	}
	putchar ('\n');
	return (0);
}
