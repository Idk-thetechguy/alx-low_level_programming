#include "main.h"
#include <stdlib.h>
/**
* _calloc - Reserves memory for an array consisting of a specific quantity.
*           of elements each of an inputted byte size.
* @nmemb: The number of elements.
* @size: The size of each element in the array in terms of bytes.
*
* Return: If nmemb = 0, size = 0, or the function fails - NULL.
*         Otherwise - An indicator indicating location of the assigned memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;
char *filler;
unsigned int index;
if (nmemb == 0 || size == 0)
return (NULL);
mem = malloc(size * nmemb);
if (mem == NULL)
return (NULL);
filler = mem;
for (index = 0; index < (size * nmemb); index++)
filler[index] = '\0';
return (mem);
}
