#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of int
 * @min: Minimum
 * @max: Maximum
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min + i <= max; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
