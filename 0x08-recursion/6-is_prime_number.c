#include <stdio.h>

/**
 * prime2 - Evaluates if a number is prime
 * @a: Same number as n
 * @b: Number that iterates from 1 to n
 *
 * Return: On success 1, otherwise 0
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);

	if (a % b == 0)
		return (0);

	return (prime2(a, b + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: Integer to check
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime2(n, 2));
}
