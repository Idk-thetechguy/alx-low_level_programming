#include <stdio.h>
#include <stdlib.h>

/**
 * main - Display the sum of non-negative integers.
 *        Followed by a new line.
 * @argc: The count of parameters supplied to the software.
 * @argv: A collection of references to the parameters.
 *
 * Return: If one contains symbols that are non-numerical characters - 1.
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

		sum += atoi(argv[num]);/*code*/
	}

	printf("%d\n", sum);

	return (0);
}
