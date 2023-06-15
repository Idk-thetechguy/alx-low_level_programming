#include <stdio.h>
#include <stdlib.h>
/**
* main - Display the product of two numbers, then move to the next line.
* @argc: The quantity of arguments provided to the program.
* @argv: A collection of references to the parameters.
*
* Return: If the program is given two arguments - 0.
*       If the program is not provided with two arguments - 1.
*/
int main(int argc, char *argv[])
{
int num1, num2, prod;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
prod = num1 *num2;
printf("%d\n", prod);
return (0);
}
