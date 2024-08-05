#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Funcion que agrega un new node al principio de la lista
 * Si el nodo nuevo es Null, liberar
 *@new_node : el nodo nuevo que va al principio de la lista
 * Return: the address of the new element, or NULL if it failed
 */

size_t _strlen(const char *s)
	{
    size_t len = 0;
    while (*s!= '\0') {
        len++;
        s++;
    }
    return len;
}

list_t *add_node(list_t **head, const char *str) {
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) 
	{
	return NULL;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL) 
	{
	free(new_node);
	return NULL;
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
