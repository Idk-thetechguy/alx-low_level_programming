#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - entry point of the program
*
* @ac: the number of command-line arguments passed to the program
* @av: an array of strings containing the command-line arguments
*
* Return: 0 on success, 1 on failure
*/
int main(int ac, char **av)
{
int res;
if (ac != 3)
{
dprintf(2, "Usage: %s filename text\n", av[0]);
exit(1);
}
res = create_file(av[1], av[2]);
printf("-> %i\n", res);
return (0);
}
