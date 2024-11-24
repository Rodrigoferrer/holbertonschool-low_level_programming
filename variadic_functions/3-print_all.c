#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Function that prints anything
 * @format: list of types of arguments
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	char separator;
	int printed;

	i = 0;
	separator = ',';
	printed = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (printed)
				printf("%c ", separator);

			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			}
			printed = 1;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
