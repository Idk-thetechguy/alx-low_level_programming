#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Print the contents of a text file to the standard output.
* @filename: The act of reading a file in text format.
* @letters: The quantity of characters that need to be perused.
* Return: w- count of bytes that were both read and subsequently printed.
* 0 When the function encounters a failure or if the filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
