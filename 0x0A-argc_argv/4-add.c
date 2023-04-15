#include <stdlib.h>

#include "main.h"

#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (isdigit(argv[i][j]))
		{
		printf("Error\n");
		return (1);
		}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
