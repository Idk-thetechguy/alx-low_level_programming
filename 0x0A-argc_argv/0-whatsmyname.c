#include <stdio.h>
#include "main.h"
/**
* main - Display the program name.
* @argc: Quantity of arguments.
* @argv: List of parameters.
*
* Return: Success: 0 every time.
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
