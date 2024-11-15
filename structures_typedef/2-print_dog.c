#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function that prints the elements of struct dog
 * @d: Pointer to struct dog
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s", d->name);
	}
	printf("Age: %f", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}
	}
}
