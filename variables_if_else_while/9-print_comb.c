#include <stdio.h>

/**
 * main - Program that prints number 0 to 9 with a coma and a space
 * Return: 0 if succesfull
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if(num != 9)
		{
			putchar(' ');
			putchar(',');
		}
		num++;
	}	
	putchar ('\n');
	return (0);
}
