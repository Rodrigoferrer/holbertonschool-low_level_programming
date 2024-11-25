#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @list: arguments from print_all
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints an integer
 * @list: arguments from print_all
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: arguments from print_all
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints a string
 * @list: arguments from print_all
 */

void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	char *separator = "";
	print_t prints[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (prints[j].type)
		{
			if (prints[j].type == format[i])
			{
				printf("%s", separator);
				prints[j].print(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
