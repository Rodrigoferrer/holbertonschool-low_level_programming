#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_string(va_list list);
void print_float(va_list list);
void print_int(va_list list);
void print_char(va_list list);

/**
 * struct printer - structure for printing various types
 * @type: type to print
 * @print: function to print
 */

typedef struct printer
{
        char type;
        void (*print)(va_list);
} print_t;

#endif
