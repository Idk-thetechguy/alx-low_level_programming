#include <stdio.h>

/**
 * print_name - Function that prints a name.
 * @name: Pointer to a character array containing the name.
 * @f: Pointer to a function that takes a character pointer as an argument.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
