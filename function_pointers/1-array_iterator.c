#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array.
 * @array: array of int
 * @size: Size of the array
 * @action: Pointer to the function I need to use
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
