#include "main.h"
/**
* _memset - fills a block of memory with a specific value
* @s: starting address of the memory to be filled
* @b: the desired value to fill the memory with
* @n: the number of bytes to be filled
*
* Return: a pointer to the beginning of the memory block after being filled
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
