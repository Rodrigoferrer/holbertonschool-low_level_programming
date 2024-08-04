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

size_t print_list(const list_t *h)
{
    size_t contador = 0;

    while (h != NULL)
    {
        printf("[%lu] %s\n", contador, h->str);
        contador++;
        h = h->next;
    }
    return (contador);
}
