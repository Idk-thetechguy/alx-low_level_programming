#include "main.h"
/**
* _strncpy - copy n characters from source string to destination string
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: maximum number of characters to be copied from source string
*
* Return: pointer to destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
