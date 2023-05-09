#include <stdio.h>

/**
 * main - Entry point
 * prints all lower case alphabets except q & e
 *
 * Return: 0 on succes
 */

int main(void)
{
char alphabet = 'a';
char z = 'z';

while (alphabet <= z)
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
alphabet++;
}
putchar('\n');
return (0);
}
