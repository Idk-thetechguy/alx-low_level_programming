#include "main.h"
/**
* is_digit - checks whether a character is a digit (0 through 9)
*
* @c: the character to be checked
*
* Return: 1 if c is a digit, 0 otherwise
*/
int is_digit(char c)
{
/* A character is a digit if its ASCII code is between 48 and 57 */
return (c >= '0' && c <= '9');
}
