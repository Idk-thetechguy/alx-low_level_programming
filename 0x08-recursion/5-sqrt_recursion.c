#include <stdio.h>

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to calculate the square root of.
*
* Return: The natural square root of n
*/
int _sqrt_recursion(int n)
{
int i = (1);

if (n < 0)
return (-1);

while ((i * i) < n)
i++;

if ((i *i) == n)
return (i);

return (-1);
}
