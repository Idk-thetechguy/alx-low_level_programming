#include "main.h"
#include <unistd.h>
/**
* _putchar - writes a single character to the standard output stream
* @c: The character to be printed
*
* Return: On success, the function returns the number of characters printed
*         which is 1 in this case. On error, the function returns -1 and
*         sets errno to indicate the error.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
