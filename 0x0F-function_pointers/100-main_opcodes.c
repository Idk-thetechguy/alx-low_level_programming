#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
exit(1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes <= 0)
{
printf("Error\n");
exit(2);
}

unsigned char *main_ptr = (unsigned char *)main;
int i;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(main_ptr + i));
}

printf("\n");

return (0);
}
