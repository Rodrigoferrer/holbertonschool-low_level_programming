#include <stdio.h>

/**
 * main - Program that gives the alphabet from a to z
 * Return: 0 if succesfull
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	for (i = 'A'; i <= 'Z'; i++);
	putchar(i);
	}
	putchar('\n');
	return (0);
}
