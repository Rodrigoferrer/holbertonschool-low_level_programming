#include "main.h"
#include <stdio.h>

/**
 * _argc_argv - Function that prints the name of the program
 * @argc: Arguments count
 * @argv: Arguments variables
 * Return: Void
 */

void _argc_argv(int argc, char **argv)
{
	printf("The name of the program is: %s\n", argv[0]);
	printf("The number of the arguments is: %d\n", argc);
}

/**
 * main - Entry of the program
 * @argc: arguments count
 * @argv: arguments variables
 * Return: 0
 */

int main(int argc, char **argv)
{
	_argc_argv(argc, argv);
		return (0);
}
