#include <stdio.h>

/**
 * main - Program that gives the alphabet from a to z
 * Return: 0 if succesfull
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
