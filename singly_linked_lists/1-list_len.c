#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements of list_t
 * @h: Pointer to list_t
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *aux;
	size_t i;

	aux = h;
	i = 0;

	while (aux != NULL)
	{
		if (aux->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		aux = aux->next;
		i++;
	}
	return (i);
}
