#include "main.h"
#include <unistd.h>
/**
* _putchar - Writes the character 'c' to standard output (stdout)
* @c: charactetvto be displayed
*
* Return: Success achieved 1
* Function returns -1 on error and sets errno appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
