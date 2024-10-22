#include <stdio.h>

/**
 * main - Program that gives the alphabet from a to z - except q and e
 * Return: 0 if succesfull
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if ((i == 'q') | (i == 'e'))
	{
	i++;
	}
	putchar(i);
	}
	putchar('\n');
	return (0);
}
