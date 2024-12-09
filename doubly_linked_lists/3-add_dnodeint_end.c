#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Function that adds a node at the end of a list
 * @head: Pointer to pointer which holds the struct of list
 * @n: integer to place in the node
 * Return: The adress of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *aux;

	aux = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = node;
	node->prev = aux;
	return (node);
	free(node);
}
