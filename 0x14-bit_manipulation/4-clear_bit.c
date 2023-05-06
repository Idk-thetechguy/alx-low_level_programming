#include "main.h"
/**
* clear_bit -Assigns the value of 0 to a specified bit.
* @n: Change the number by using a pointer.
* @index: Index of the bit to reset
*
* Return: 1 point for success, -1 point for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
