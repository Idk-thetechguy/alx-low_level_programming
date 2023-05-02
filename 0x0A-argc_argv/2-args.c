#include <stdio.h>
#include "main.h"
/**
* main - This program prints all the command-line arguments it receives
*
* @argc: The number of arguments passed to the program
* @argv: An array of strings containing the arguments passed to the program
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
