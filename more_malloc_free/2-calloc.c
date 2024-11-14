#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: ---
 * @size: ----
 * Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		((unsigned char *)ptr)[i] = 0;
	}
	return (ptr);
}
