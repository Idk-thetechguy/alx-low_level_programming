#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *progName = __FILE__; /* Stores the name of the program */
	char *progNameWithoutPath; /* Stores the program name without the path */
	char *temp; /* Temporary variable to store substrings */

	/* Extract the program name without the path */
	temp = progName;
	while (*progName != '\0')
	{
	if (*progName == '/')
		temp = progName + 1;
	progName++;
	}
	progNameWithoutPath = temp;

	printf("%s\n", progNameWithoutPath); /* Print the program name without path */

	return (0);
}
