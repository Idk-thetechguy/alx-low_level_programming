#include <stdlib.h>

#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to allocate
 *
 * Return: Pointer to the allocated memory
 * If malloc fails, the function will cause normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;/*Declare a pointer to store the allocated memory*/

	ptr = malloc(b);/*Allocate memory using malloc*/

	if (ptr == NULL) /*Check if malloc failed*/
	{
		exit(98); /*Terminate process with status value of 98*/
	}

	return (0);
}
