#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * Return: The value of the last digit
 */
int print_last_digit(int number)
{
	number %= 10;

	if (number < 0)
		number *= -1;

	_putchar(number + '0');
	return (number);
}
