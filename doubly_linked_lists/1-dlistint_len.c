#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Funciton that returns the number of nodes
 * @h: header
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux;
	size_t count = 0;

	aux = h;

	while (aux != NULL)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
