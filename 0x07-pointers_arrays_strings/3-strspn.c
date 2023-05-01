#include "main.h"
/**
* _strspn - Entry point function that calculates the length of the
* initial segment of s which consists entirely of bytes from accept.
* @s: input string to be searched
* @accept: string containing the bytes to match
* Return: the number of bytes in the initial segment of s consisting
* entirely of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;
while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
