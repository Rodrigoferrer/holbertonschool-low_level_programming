#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: String
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
