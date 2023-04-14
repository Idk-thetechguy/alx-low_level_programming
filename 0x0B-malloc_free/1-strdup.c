#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string in memory.
 *  @str: Pointer to the string to be duplicated.
 *
 *  Return: Pointer to the newly allocated space in memory containing the
 *  duplicated string, or NULL if insufficient memory was available
 *  or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

