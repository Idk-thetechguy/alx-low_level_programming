#include <stddef.h>

/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: Pointer to the input string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: if s is a NULL pointer or an empty string, return 0 */
	if (s == NULL || *s == '\0')
		return (0);

	/* Recursively call _strlen_recursion with s+1 and add 1 to the result */
	return (1 + _strlen_recursion(s + 1));
}
