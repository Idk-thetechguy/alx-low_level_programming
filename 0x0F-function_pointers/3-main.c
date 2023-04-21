#include <stdio.h>
#include <stdlib.h>

int get_op_func(int arg1, int arg2);

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 98 for wrong number of arguments, 99 for invalid
 * operator, 100 for division by zero
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
int result;

if (argc != 4)
{
printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
{
printf("Error: Cannot divide by zero\n");
return (100);
}

result = get_op_func(num1, num2);
printf("%d\n", result);
return (0);
}
