#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Function that inserts a node at the begining of a list
 * @head: Pointer to a pointer which holds the structure
 * @n: Integer to insert in the structure
 * Return: Address of new element or NULL if fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
	free(new_node);
}
