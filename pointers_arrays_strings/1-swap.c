#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swaps the values of two integers
 * @a: First parameter to make the swap
 * @b: Second parameter to make the swap
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
