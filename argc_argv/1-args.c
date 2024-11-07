#include "main.h"
#include <stdio.h>

/**
 * print_argc - Function that prints the number of arguments
 * @argc: Arguments count
 * @argv: Arguments variables
 * Return: Void
 */

void print_argc(int argc, char **argv __attribute__((unused)))
{
		printf("%d", argc);
}

/**
 * main - Entry of the program
 * @argc: Arguments count
 * @argv: Arguments variables
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	print_argc(argc, argv);
	return (0);
}
