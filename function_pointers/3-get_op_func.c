#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - Function that calls another function depending on the
 * @s: string
 * Return: Pointer to last
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	if (s == NULL || s[0] == '\0')
		return (NULL);

	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
