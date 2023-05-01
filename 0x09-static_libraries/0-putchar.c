#include <unistd.h>
/**
* _putchar - writes a single character to standard output
* @c: The character to be written
*
* Return: On success, 1.
* On error, -1 is returned and the corresponding error code is set in errno.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
