#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: header node
 * @str: string
 * Return: The adress of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *strcopied;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	strcopied = strdup(str);
	if (strcopied == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strcopied;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
