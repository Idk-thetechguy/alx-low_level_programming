#include "main.h"
/**
* set_bit - Set a particular index bit to 1.
* @n: Pointer to the variable holding the value to be modified.
* @index: The position of the bit that needs to be set to 1.
* Return: 1 point for success, -1 point for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
