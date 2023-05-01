#include "main.h"
/**
* _strstr - Entry point function that searches for the first occurrence
* of the substring @needle in the string @haystack.
*
* @haystack: The string to be searched.
* @needle: The substring to be found.
*
* Return: A pointer to the first occurrence of @needle in @haystack,
* or NULL if @needle is not found.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
