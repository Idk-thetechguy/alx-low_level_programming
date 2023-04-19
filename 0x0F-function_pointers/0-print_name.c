include "function_pointers.h"

#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: Pointer to a string containing the name.
 * @f: Pointer to a function that takes a char pointer as argument.
 *
 * Description: This function takes a string containing name & pointer
 * to a function that takes a char pointer as an argument.
 * function with the name as an argument to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
