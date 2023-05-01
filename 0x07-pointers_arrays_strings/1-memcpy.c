#include "main.h"
/**
* _memcpy - Copies n bytes from memory area src to memory area dest.
*
* @dest: Pointer to the destination array.
* @src: Pointer to the source of data to be copied.
* @n: Number of bytes to be copied.
*
* Return: Pointer to the destination array.
*/
char *_memcpy(char *dest, const char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
