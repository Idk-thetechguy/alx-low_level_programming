#include <stdio.h>
/**
* main - This function prints the alphabet in lowercase.
*
* Return: Always returns 0 to indicate success.
*/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
