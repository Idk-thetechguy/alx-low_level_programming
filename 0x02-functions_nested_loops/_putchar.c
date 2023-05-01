#include "main.h"
#include <unistd.h>
/**
* _putchar - writes a single character to the standard output stream(stdout)
* @c: The character to be printed
*
* Return: On success, 1 is returned.
* On failure, -1 is returned and errno is set to indicate the error.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
