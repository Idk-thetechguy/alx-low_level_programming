#include <stdio.h>

/**
 * main - Count the quantity of arguments passed to it.
 * @argc: The quantity of parameters provided to the software.
 * @argv: A collection of references to the parameters.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);/*code*/

	return (0);
}
