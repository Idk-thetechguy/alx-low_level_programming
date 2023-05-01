#include "main.h"
#include <stdlib.h>
/**
* create_array - Create array of size 'size' and assign each element to 'c'.
*
* @size: Size of the array.
*
* @c: Char to be assigned to each element of the array.
*
* Description: This function creates an array of size 'size' and assigns
* 'c' to each element of the array.
*
* Return: Pointer to the array, or NULL if the creation fails.
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
