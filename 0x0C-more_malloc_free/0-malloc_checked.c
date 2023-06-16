#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Memory is allocated through the use of malloc.
* @b: The quantity of bytes to be assigned.
*
* Return: A reference to the memory that has been assigned.
*/
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}
