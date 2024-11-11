#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Function that checks if c is a digit from 0 to 9
 * @c: digit to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}

/**
 * main - Entry of the program
 * @argc: arguments count
 * @argv: arguments variables
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
