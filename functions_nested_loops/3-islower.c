#include "main.h"
/**
 * _islower - Entry point
 * @c: character
 * Return: 1 (Success) - 0 (Otherwise)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
