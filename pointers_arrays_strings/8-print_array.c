#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array of int
 * @a: Pointer to a
 * @n: number of elements
 * Return: Void
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i <= n - 1)
		{
		printf(" ,");
		}
	}
	printf("\n");
}
