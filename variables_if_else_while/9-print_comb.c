#include <stdio.h>

/**
 * main - Program that prints the alphabet in reverse
 * Return: 0 if succesfull
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if(num == 9)
		{
			putchar('\n');
		}
		putchar(',');
		num++;
	}	
	return (0);
}
