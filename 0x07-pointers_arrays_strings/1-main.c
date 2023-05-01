#include "main.h"
#include <stdio.h>
/**
* simple_print_buffer - prints buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}
/**
* my_memcpy - copies n bytes from memory area src to memory area dest
* @dest: pointer to the destination array where the content is to be copied
* @src: pointer to the source of data to be copied
* @n: number of bytes to copy
*
* Return: pointer to destination.
*/
char *my_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char buffer[98] = {0};
char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
simple_print_buffer(buffer, 98);
my_memcpy(buffer + 50, buffer2, 10);
printf("-------------------------------------------------\n");
simple_print_buffer(buffer, 98);
return (0);
}
