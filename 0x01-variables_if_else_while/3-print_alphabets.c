#include <stdio.h>
/**
* main - Entry point
* prints a-z in lower & upper case letters
*
* Return: 0 on success
*/
int main(void)
{
char i = 'a';
char j = 'A';
char z = 'z';
char Z = 'Z';

while (i <= z)
{
putchar(i);
i++;
}
while (j <= Z)
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
