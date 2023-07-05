#include "lists.h"
#include <stdio.h>
/**
* print_list - Displays every item within a list_t collection.
* @h: The list_t list.
*
* Return: The total of nodes in h.
*/
size_t print_list(const list_t *h)/*prototype*/
{
size_t nodes = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
nodes++;
h = h->next;
}
return (nodes);
}
