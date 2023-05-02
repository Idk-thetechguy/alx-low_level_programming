#include <stdio.h>
#include "lists.h"
/**
* print_list - Prints out all the nodes of a linked list
* @h: Print the list_t list using a pointer
*
* Return: printed nodes count
*/
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
