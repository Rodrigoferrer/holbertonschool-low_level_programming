#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
char *s;
int i;

if (size == 0)
{
	return(NULL);
}
s = malloc(size+1);
if (s=NULL)
	return(NULL);
for (i = 0; s[i] != NULL ; i++)
{
	s[i] = c;
}
}
