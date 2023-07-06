#include "lists.h"
/**
* list_len - Determines the count of items in a list_t linked list.
* @h: The linked list_t list.
*
* Return: The quantity of items within h.
*/
size_t list_len(const list_t *h)/*prototype*/
{
size_t elements = 0;
while (h)
{
elements++;
h = h->next;
}
return (elements);
}
