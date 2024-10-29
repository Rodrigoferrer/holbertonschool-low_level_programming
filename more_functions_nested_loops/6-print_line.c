#include "main.h"
#include <stdio.h>

/**
 * print_line - Function that prints a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: Void
 */

void print_line(int n)
{
    int i;

    if (n <= 0) 
    {
        _putchar('\n'); 
        return; 
    }

    for (i = 0; i < n; i++) 
    {
        _putchar('_'); 
    }

    _putchar('\n'); 
}
