#include "main.h"
/**
* _strpbrk - Finds first occurrence of any character in the string @accept
*            in the string @s.
* @s: The string to be searched.
* @accept: The string containing characters to match.
* Return: Pointer to the first occurrence of a character from @accept in @s,
*         or NULL if no match is found.
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
