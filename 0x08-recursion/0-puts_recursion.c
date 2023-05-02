#include "main.h"
/**
* _puts_recursion - A function such as puts();
* @s: submitted
* Return: The function always returns 0 to indicate success
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
