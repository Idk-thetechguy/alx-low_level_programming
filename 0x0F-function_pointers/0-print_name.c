#include "function_pointers.h"
/**
* print_name - Alters a name
* @name: The title to prints
* @f: Function pointer
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
