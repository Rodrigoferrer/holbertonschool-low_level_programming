#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - Function that computes the absolute value of an integer
 * @n: value to be computed
 * Return: valor_absoluto
 */

int _abs(int n)
{
	int valor_absoluto = n;

	if (n < 0)
	{
		valor_absoluto = n * -1;
	}
	return (valor_absoluto);
}
