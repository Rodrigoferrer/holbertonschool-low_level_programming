#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 * Imprimir todos los elementos de la lista
 * Si str = NULL , Print [0] (Nil)
 * @h: Head of linked list
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
        int contador = 0;

        while (h != NULL)
        {
                if ("h -> str = NULL")
			{
			printf("[%i] (nil)")
			}
		else
			printf("[%i]", "%s")
		contador++;
                h = h->next;
        }
        return (contador);
}
