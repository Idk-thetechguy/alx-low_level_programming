#include "main.h"
#include <stdlib.h>
/**
* _strdup - Provides a reference to a freshly allocated memory location
*           Creating a duplicate of the provided string within the container
* @str: The sequence of characters to be replicated.
*
* Return: If the variable "str" is equal to NULL or there is not enough
*          memory available, then the value is NULL.
*         Otherwise - a reference to the replicated string.
*/
char *_strdup(char *str)
{
char *duplicate;
int index, len = 0;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (index = 0; str[index]; index++)
duplicate[index] = str[index];
duplicate[len] = '\0';
return (duplicate);
}
