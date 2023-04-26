#include <stdio.h>

/**
* sqrt2 - Evaluates if b * b is equal to a
* @a: same number as n
* @b: number that iterates from 1 to n
* Return: On success, returns the square root of a.
* On error, returns -1 and sets errno appropriately.
*/
int sqrt2(int a, int b)

{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}
/**
* _sqrt_recursion - Returns the natural square root of n
* @n: Number Integer
* Return: On success, returns the square root of n.
* On error, returns -1 and sets errno appropriately.
*/

int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
