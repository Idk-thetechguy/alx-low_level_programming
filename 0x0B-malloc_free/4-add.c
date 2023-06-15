#include <stdio.h>
#include <stdlib.h>
/**
* main - Displays the sum of non-negative integers.
*        followed by a new line.
* @argc: The quantity of parameters provided to the program.
* @argv: A collection of references to the arguments.
*
* Return: If any of the numbers includes non-digit symbols - 1.
*         Otherwise - 0.
*/
int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < '0' || argv[num][digit] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
