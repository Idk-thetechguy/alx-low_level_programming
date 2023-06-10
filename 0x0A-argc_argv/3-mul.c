
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Displays the product of two numbers, followed by a newline.
 * @argc: The quantity of parameters provided to the application
 * @argv: A list of references to the parameters.
 *
 * Return: If the algorithm receives dual parameters - zero.
 *       If the software does not receive a pair of parameters - 1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;/*code*/

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
