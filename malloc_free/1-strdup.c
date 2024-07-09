#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * funcion que devuelve el largo de un string
 */
int _strlen(char *s)
{
        int contador = 0;

        for (; s[contador] != '\0'; contador++)
        {
        }

        return (contador);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *duplicado;
	int longitud_str;
	int i;

	longitud_str = _strlen(str);
	duplicado = malloc(longitud_str + 1 * sizeof(char));
	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < longitud_str; i++)
	{
	duplicado[i] = str[i];
	}
	duplicado[longitud_str] = '\0';
	
	return(duplicado);
}
