#include "main.h"
/**
* factorial - The function calculates the factorial of a given number
* @n: Please provide a number to compute its factorial
*
* Return: The factorial of a number n
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
