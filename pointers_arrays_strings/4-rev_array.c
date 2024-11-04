#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Array of int
 * @n: Number of elements to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
