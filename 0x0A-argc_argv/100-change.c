#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins required to
 *        alter revise for a sum of currency.
 * @argc: The quantity of parameters provided to the program.
 * @argv: A collection of references to the parameters.
 *
 * Return: If the quantity of arguments is not precisely one - 1.
 *         Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");/*code*/
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);/*code*/

	return (0);
}
