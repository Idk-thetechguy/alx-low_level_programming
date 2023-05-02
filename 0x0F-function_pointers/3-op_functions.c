#include "3-calc.h"
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
int op_sub(int a, int b);
/**
* op_add - Add together two numbers and output their total
* @a: The initial numeral
* @b: The number that comes after the first
*
* Return: The result obtained by adding a and b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Compute the numerical difference between two values
* @a: The initial numeral
* @b: The number that comes after the first
*
* Return: The numerical difference between a and b
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Compute the multiplication result of two numeric values
* @a:  The initial numeral
* @b:  The number that comes after the first
*
* Return: The result of multiplying a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Compute the quotient obtained by dividing one number by another
* @a:  The initial numeral
* @b:  The number that comes after the first
*
* Return: The result obtained by dividing a by b
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Compute the modulus (remainder) of dividing two numbers.
* @a:  The initial numeral
* @b:  The number that comes after the first
*
* Return: The modulus of a divided by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
