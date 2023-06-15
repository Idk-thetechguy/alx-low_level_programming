#include <stdio.h>
/**
* main - Displays every parameter it is given.
* @argc: The count of parameters provided to the program.
* @argv: A collection of references to the parameters.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int arg;
for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);
return (0);
}
