#include "main.h"
/**
* _puts - prints a string to stdout followed by a newline character
* @str: pointer to the string to be printed
*
* Return: void
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
