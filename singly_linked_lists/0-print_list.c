#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints all elements of list_t
 * @h: Pointer to list_t
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
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
		else
		{
			printf("[%d] %s\n", aux->len, aux->str);
		}
		aux = aux->next;
		i++;
	}
	return (i);
}
