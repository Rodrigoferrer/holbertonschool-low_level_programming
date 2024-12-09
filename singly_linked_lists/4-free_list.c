#include "lists.h"
#include <stdio.h>

/**
 * free_list - Function that frees a list
 * @head: pointer to struct
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		if (list->str != NULL)
		{
			free(list->str);
		}
	}
	free(list);
}
