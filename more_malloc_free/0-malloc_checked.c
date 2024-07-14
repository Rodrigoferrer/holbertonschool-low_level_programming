#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and checks for errors
 * @b: the size of the memory to allocate
 * Return: a pointer to the allocated memory, or exit with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b) {
    /* Call malloc to allocate memory of size b */
    void *ptr = malloc(b);

    /* Check if malloc failed (i.e., ptr is NULL) */
    if (ptr == NULL) {
        /* Print an error message to stderr using putchar */
        char *err_msg = "Error: unable to allocate memory\n";
        for (; *err_msg; err_msg++) {
            putchar(*err_msg);
        }
        /* Exit with status 98 if malloc fails */
        exit(98);
    }

    /* If malloc succeeds, return the pointer to the allocated memory */
    return ptr;
}
