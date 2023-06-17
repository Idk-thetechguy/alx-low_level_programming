#include "main.h"
#include <stdlib.h>
/**
* array_range - Generates a sorted sequence of whole numbers.
*               from min to max, inclusive.
* @min: The initial element in the array.
* @max: The final element in the array.
*
* Return: If min > max or the function fails - NULL.
*         Otherwise - a reference to the array that has just been created.
*/
int *array_range(int min, int max)
{
int *array, index, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array[index] = min++;
return (array);
}
