#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string.
 * NULL if memory allocation fails or if s1/s2 are NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of s1 and s2 */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Use entire s2 if n >= length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for concatenated string */
	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
		return (NULL);

	/* Copy s1 to concatenated string */
	for (i = 0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];

	/* Copy first n bytes of s2 to concatenated string */
	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	/* Add null terminator at the end */
	concatenated[i + j] = '\0';

	return (concatenated);
}
