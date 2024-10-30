#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swaps the values of two integers
 * @a, @b: Parameters to be swapped
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
