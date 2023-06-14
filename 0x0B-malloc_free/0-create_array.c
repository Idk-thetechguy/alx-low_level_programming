#include "main.h"
#include <stdlib.h>
/**
* create_array - Generates a collection of characters and
*                initializes it with a specific char.
* @size: The dimensions of the array that will undergo initialization.
* @c: The particular character used to initialize the array.
*
* Return: If size == 0 or if the function is unsuccessful - NULL.
*         Otherwise - a reference to the array.
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = c;
return (array);
}
