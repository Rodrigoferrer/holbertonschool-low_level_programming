#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 *_islower - function that checks if a letter is lowercase
 *Return: void
 */

int _islower(int c)
{
	if (islower(c))
	{
		return(1);
	}
	else
	{	
		return(0);
	}
}
