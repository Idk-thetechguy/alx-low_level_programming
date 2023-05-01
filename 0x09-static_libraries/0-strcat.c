#include "main.h"
/**
* _strcat - Concatenate two strings
* @dest: Destination string
* @src: Source string
*
* Description: This function appends the contents of the source string
* to the end of the destination string.
*
* Return: A pointer to the destination string
*/
char *_strcat(char *dest, char *src)
{
int i, j;
/* Find the end of the destination string */
for (i = 0; dest[i] != '\0'; i++)
;
/* Append the source string to the end of the destination string */
for (j = 0; src[j] != '\0'; j++)
dest[i + j] = src[j];
/* Add a null terminating character to the end of the concatenated string */
dest[i + j] = '\0';
/* Return a pointer to the destination string */
return (dest);
}
