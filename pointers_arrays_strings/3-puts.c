#include "main.h" 
/**
* function that prints a string followed by a new line using command putss
void _puts(char *str)
*return: always 0
*/
void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
	{
        	_putchar(*str);
	}
		_putchar('\n');
}
