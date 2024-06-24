#include "string.h"
#include "main.h"
/**
 * function that prints a string backwards
 * return: always 0
 */
void print_rev(char *s)
{
    int longitud = strlen(s);
    int i;
    for (i = longitud - 1; i >= 0; i--) {
        _putchar(s[i]);
    }
    _putchar('\n');
}
