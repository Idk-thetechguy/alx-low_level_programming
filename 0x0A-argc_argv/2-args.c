#include <stdio.h>

/**
 * main - Display all parameters it receives.
 * @argc: The quantity of parameters provided to the software
 * @argv: The quantity of parameters provided to the application.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int arg;/*code*/

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
