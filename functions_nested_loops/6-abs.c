#include "main.h"
/**
 * _abs - transforms a value into absolute value
 * Return: Always 0
 */
int _abs(int number)
{
	if (number < 0)
		return (number * -1);
	else
		return (number);
}
