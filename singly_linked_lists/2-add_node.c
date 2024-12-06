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
	list_t node;

	**head = *aux;

	if (aux == NULL)
		return (NULL);
	node = malloc(sizeof(list_t);
	if (node == NULL)
		return (NULL);
	node->string = strdup(str);
	if (node->string == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(string);
	node->next = aux;
	aux = nodo;
	return (aux);
}
