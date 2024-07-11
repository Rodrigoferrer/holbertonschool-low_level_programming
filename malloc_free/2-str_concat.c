#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatena dos strings
 * @s1: Primer string
 * @s2: Segundo string
 *
 * Return: Puntero al nuevo string concatenado, o NULL si falla
 */

char *str_concat(char *s1, char *s2)
{
    char *nueva_str;
    unsigned int len1 = 0, len2 = 0, i, j;

    /* Tratar NULL como string vacío */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calcular longitudes */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Asignar memoria para la nueva string */
    nueva_str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (nueva_str == NULL)
        return (NULL);

    /* Copiar s1 */
    for (i = 0; i < len1; i++)
        nueva_str[i] = s1[i];

    /* Copiar s2 */
    for (j = 0; j < len2; j++, i++)
        nueva_str[i] = s2[j];

    /* Añadir el carácter nulo al final */
    nueva_str[i] = '\0';

    return (nueva_str);
}
