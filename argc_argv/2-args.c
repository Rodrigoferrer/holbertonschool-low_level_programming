#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints the variables
 * @argc: Arguments count
 * @argv: Arguments variables
 * Return: Void
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
			i++;
	}
	return (0);
}
