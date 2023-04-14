#include <stdlib.h>

char *create_array(unsigned int size, char c) 
{
	if (size == 0) 
{
	return NULL;
}

char *str = (char *)malloc(sizeof(char) * size);
if (str == NULL)
{
	return NULL;
}

for (unsigned int i = 0; i < size; i++)
{
	*(str + i) = c;
}
        return str;
}