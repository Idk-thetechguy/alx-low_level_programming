#include "main.h"
#include <stdlib.h>
/**
* argstostr - Joins all program arguments together into a single string;
*             The string contains arguments that are delimited by a line break.
* @ac: The quantity of parameters provided to the program.
* @av: A collection of pointers referencing the arguments.
*
* Return: If ac == 0, av == NULL, or the function fails - NULL.
*         Otherwise - an indication of the recently created string.
*/
char *argstostr(int ac, char **av)
{
char *str;
int arg, byte, index, size = ac;
if (ac == 0 || av == NULL)
return (NULL);
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
size++;
}
str = malloc(sizeof(char) * size + 1);
if (str == NULL)
return (NULL);
index = 0;
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
str[index++] = av[arg][byte];
str[index++] = '\n';
}
str[size] = '\0';
return (str);
}
