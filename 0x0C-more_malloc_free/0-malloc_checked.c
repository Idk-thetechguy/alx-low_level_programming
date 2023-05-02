#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - Reserves memory using malloc
* @b: Allocate a specific amount of memory in bytes
*
* Return: a reference to the reserved memory location
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
