#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry of the program
 * main - Program that returns the value of the add of two int
 * @argc: Arguments count
 * @argv: Arguments variables
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 < 0 || num2 < 0 || num1 > 9 || num2 > 9)
	{
		printf("Error\n");
		return (1);
	}

	result = num1 + num2;
	printf("%d\n", result);

	return (0);
}
