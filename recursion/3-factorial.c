#include "main.h"
/**
 * RodrigoFerrer
 * @n: factorial
 * if n <=0 return: -1
 * Factorial of 0 = 1
 * Return always 0
 */
int factorial(int n) 
{
	if (n < 0) 
	{
        	return (-1);
	}
    if (n == 0 || n == 1) 
    {
	return (1);
    }
    return (n * factorial(n - 1));
}
