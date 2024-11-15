#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Function that initializes struct_dog
 * @d: pointer to struct_dog
 * @name: Pointer to name
 * @age: Pointer to age
 * @owner: Pointer to owner
 * Description: Initializing struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
