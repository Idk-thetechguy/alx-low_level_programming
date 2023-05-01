#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers
*
* This program generates all possible combinations of single-digit numbers
*
* Return: Always returns 0 indicating success.
*/
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
