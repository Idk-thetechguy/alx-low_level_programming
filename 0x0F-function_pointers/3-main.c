#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

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
int num1, num2, result;
int (*op_func)(int, int);

if (argc != 4)
