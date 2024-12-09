#include "lists.h"
#include <stdlib.h>

/**
 * _strlen2 - Function that returns the length of a string
 * @s: String
 * Return: length
 */

int _strlen2(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * add_node_end - Function that inserts a node at the end of list
 * @head: pointer to pointer to head
 * @str: string
 * Return: aux
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *node;

	if (str == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = _strlen2(str);
		if (*head == NULL)
		{
			*head = temp;
		}
		else
		{
			node = *head;
			while (node->next != NULL)
			{
				node = node->next;
			}
			node->next = temp;
		}
	return (temp);
}
