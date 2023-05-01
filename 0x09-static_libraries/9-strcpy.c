#include "main.h"
/**
* _strcpy - A function that copies the string pointed to by `src` to `dest`
* @dest: Pointer to the destination buffer where the string is to be copied.
* @src: Pointer to the source string to be copied.
*
* Return: A pointer to the destination string `dest`.
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
