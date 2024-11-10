#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry of the program
 * @argc: arguments count
 * @argv: arguments variables
 * Return: 0
 */

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
		if (num < 0 || num < 9)
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}

	printf("%d\n", result);
	return (0);
}
