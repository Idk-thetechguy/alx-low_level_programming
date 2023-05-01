#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point. The main function of the program.
*
* @ac: The number of arguments passed to the program.
* @av: An array of strings containing the arguments passed to the program.
*
* Return: Always 0.
*/
int main(int ac, char *av[])
{
char *s;
s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
