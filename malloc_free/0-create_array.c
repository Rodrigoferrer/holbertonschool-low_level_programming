#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: the size of the array to create
 * @c: the character to fill the array with
 *
 * Return: a pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
    char *s;
    unsigned int i; 

    if (size == 0)
    {
        return (NULL);
    }
    s = malloc(size + 1);
    if ((s = NULL)) 
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        s[i] = c;
    }
    s[size] = '0';
    return (s);
}
