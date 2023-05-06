#include "main.h"
#include <unistd.h>
/**
* _putchar - Sends the character 'c' to the standard output stream (stdout)
* @c: The character that needs to be displayed or outputted
*
* Return: If successful, the function will return a value of 1
* If an error occurs, the function returns -1 and sets errno accordingly
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
