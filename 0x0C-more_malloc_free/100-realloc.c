#include "main.h"
#include <stdlib.h>
/**
* _realloc - Allocates a memory block by utilizing the malloc and free
*           functions.
* @ptr: A reference to the previously assigned memory location.
* @old_size: The allocated space for "ptr" expressed in bytes.
* @new_size: The byte count of the newly allocated memory block.
*
* Return: If new_size == old_size - ptr.
*         If new_size == 0 and ptr is not NULL - NULL.
*         Otherwise - a reference to the reassigned memory segment.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *mem;
char *ptr_copy, *filler;
unsigned int index;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
mem = malloc(new_size);
if (mem == NULL)
return (NULL);
return (mem);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ptr_copy = ptr;
mem = malloc(sizeof(*ptr_copy) * new_size);
if (mem == NULL)
{
free(ptr);
return (NULL);
}
filler = mem;
for (index = 0; index < old_size && index < new_size; index++)
filler[index] = *ptr_copy++;
free(ptr);
return (mem);
}
