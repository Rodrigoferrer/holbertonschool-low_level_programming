#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Function that prints the last digit of a number
 * Return: Last digit
 * @num: number to be returned
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
