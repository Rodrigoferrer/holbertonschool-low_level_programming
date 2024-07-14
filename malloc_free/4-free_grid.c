#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grilla, int altura) {
    int i; /* Declare i before the loop */
    /* Liberar cada fila individualmente */
    for (i = 0; i < altura; i++) {
        free(grilla[i]); /* Liberar la fila */
    }

    /* Liberar la grilla (arreglo de punteros de fila) */
    free(grilla); /* Liberar el arreglo de punteros de fila */
}
