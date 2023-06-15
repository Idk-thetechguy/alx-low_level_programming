#include <stdio.h>
/**
* main - Displays the quantity of parameters received by the function.
* @argc: The quantity of parameters provided to the program.
* @argv: A collection of references to the parameters.
*
* Return: Always 0.
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
