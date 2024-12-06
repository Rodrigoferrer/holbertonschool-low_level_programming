#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: header node
 * @str: string 01
 * Return: The adress of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;


	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(node->str);
	node->next = *head;
	*head = node;
	return (*head);
}
