#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Function that prints all the elements of a list
 * @h: header
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t count = 0;

	while (list != NULL)
	{
		printf("%d\n", list->n);
			list = list->next;
			count++;
	}
	return (count);
}
