#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
* struct printer - A fresh structure category that defines a printing device.
* @symbol: A representation denoting a data category.
* @print: A pointer to a function that performs printing.
*         A symbol-related data type.
*/
typedef struct printer
{
char *symbol;
void (*print)(va_list arg);
} printer_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
