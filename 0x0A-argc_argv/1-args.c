#include <stdio.h>

#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings representing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	/* Print the number of arguments passed */
	printf("%d\n", argc - 1);

	/* Print each argument */
	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
