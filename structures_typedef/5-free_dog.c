#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees the dogs
 * @d: Pointer to struct
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL || d->owner != NULL)
		{
			free(d->name);
			free(d->owner);
		}
		free(d);
	}
}
