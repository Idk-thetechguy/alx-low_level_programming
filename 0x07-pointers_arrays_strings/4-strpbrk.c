#include "main.h"
/**
* _strpbrk - Find the first occurrence of a character from @accept in @s.
* @s: The string to be searched.
* @accept: The characters to search for.
* Return: pointer to the first occurrence of a character from @accept in @s,
*         or NULL if no such character is found.
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
