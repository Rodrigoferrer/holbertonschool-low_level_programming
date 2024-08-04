#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Funcion que imprime los elementos de lista guardada en el puntero h
 *
 * Devuelve la cantidad de nodos
 */
/**
 * Imprime todos los elementos de una lista.
 *
 * Descripción de la función.
 *
 * @param h Cabeza de la lista enlazada.
 * @return Número de nodos en la lista.
 */


size_t print_list(const list_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	contador++;
	h = h->next;
	}

return (contador);
}
