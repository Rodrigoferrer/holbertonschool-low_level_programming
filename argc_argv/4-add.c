#include "main.h"
#include <stdio.h>

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

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry of the program
 * main - Program that returns the value of the add of two int
 * @argc: Arguments count
 * @argv: Arguments variables
 * Return: 0
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int num;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num != _isdigit(num))
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}

	printf("%d\n", result);
	return (0);
}
