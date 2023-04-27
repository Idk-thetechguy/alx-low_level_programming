#include <stdio.h>

/**
* main - Entry point, prints a number of command line
*
* @argc: the number of command line arguments passed to the program
* @argv: an array of pointers to the strings which are those arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);

return (0);
}
