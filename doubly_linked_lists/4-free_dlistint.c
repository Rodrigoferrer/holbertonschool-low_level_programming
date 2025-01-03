#include "lists.h"
#include "stdlib.h"

/**
 * free_dlistint - Function that frees a list
 * @head: Pointer to head
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
