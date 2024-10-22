#include <stdio.h>

/**
 * main - Program that prints number from 0 to 9
 * Return: 0 if succesfull
 */

int main(void)
{
	int nums = 0;

	while (nums < 10)
	{
	putchar(nums + '0');
	nums++;
	}
	putchar('\n');
	return (0);
}
