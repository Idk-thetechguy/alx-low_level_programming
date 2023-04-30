#include "main.h"
#include <unistd.h>
/**
* _putchar - writes a character to the standard output (stdout).
* @c: The character to be written to stdout
*
* Return: On success, returns the value 1.
* On failure, returns -1 sets the errno variable to an appropriate error code.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
