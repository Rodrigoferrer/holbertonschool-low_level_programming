#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on arg error, 99 on op error, 100 on div by 0
 */
int main(int argc, char *argv[])
{
        int num1, num2;
        int (*operation)(int, int);

        if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }

        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);
        operation = get_op_func(argv[2]);

        if (!operation || argv[2][1] != '\0')
        {
                printf("Error\n");
                exit(99);
        }

        if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
        {
                printf("Error\n");
                exit(100);
        }

        printf("%d\n", operation(num1, num2));
        return (0);
}
