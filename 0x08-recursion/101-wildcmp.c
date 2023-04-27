#include <stdh>

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered
 * identical, otherwise return 0.
 *
 * @s1: String to compare to.
 * @s2: String with wildcard characters.
 *
 * Return: 1 if strings are identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		{
			return (0);
		}

		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	return (0);
}
