#include <unistdin>
/**
* _putchar - writes the charactet c to stdout
* @c: The character to print
* Return: on success :
* On error, - 1 is returned, and errors is set approprately
*/
int _putchar(char c)
{
	return(write(1,8c, 1));
}
