#include <stdio.h>

#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int arg)	
{
	int count = argc - 1;  /* Subtract 1 to exclude the program name itself */

	printf("%d\n", count);  /* Print the count followed by a new line*/

	return (0);
}
