#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function that converts a string into int
 * @s: String
 * Return: 0
 */

int _atoi(char *s)
{
	int sign;
	unsigned int num;
	int i;

	sign = 1;
	num = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');
				i++;
			}
			return (sign * num);
		}
		i++;
	}
	return (0);
}
