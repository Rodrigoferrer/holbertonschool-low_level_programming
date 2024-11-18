#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - Function that sums two integers
 * @a: first integer
 * @b: second integer
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that substracts two integers
 * @a: first integer
 * @b: second integer
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two integers
 * @a: first integer
 * @b: second integer
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that makes modules of a and b
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
