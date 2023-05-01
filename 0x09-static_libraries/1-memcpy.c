#include <stddef.h>
/**
* _memcpy - copies n bytes from the memory area src to the memory area dest.
* @dest: pointer to the destination array where the content is to be copied.
* @src: pointer to the source of data to be copied.
* @n: number of bytes to copy.
*
* Return: a pointer to dest.
*/
void *_memcpy(void *dest, const void *src, size_t n)
{
unsigned char *d = dest;
const unsigned char *s = src;
size_t i;
for (i = 0; i < n; i++)
{
d[i] = s[i];
}
return (dest);
}
