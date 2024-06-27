#include "main.h"
/**
 * @s: string
 * int_strlen_recursion: funcion que devuelve la longitud de un string
 * Return: always 0
 */
int _strlen_recursion(char *s) {
    if (*s == '\0')
	{	
	    return 0;
	} 
    else
    	{
        return 1 + _strlen_recursion(s + 1);
    	}
}
