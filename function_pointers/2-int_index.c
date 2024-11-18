#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: Pointer to the function that compares the array int
 * Return: If elements don't match (-1)
 * If size <= (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
			i++;
	}
	return (-1);
}
