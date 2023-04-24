#include <stdio.h>

/**
 * factorial - calculates the factorial of a given number
 * @n: the number for which factorial is to be calculated
 *
 * Return: the factorial of n, or -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int result = 1;
		int i;

		for (i = 1; i <= n; i++)

		{
			result *= i;
		}
		return (result);
	}
}
