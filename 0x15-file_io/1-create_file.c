#include "main.h"
/**
* create_file - Generates a document.
* @filename: A reference to the filename that is intended to be generated.
* @text_content: A reference to a string that will be written into the file. *
* Return: If the function does not succeed, it returns -1.
* Alternatively-1
*/
int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}