#include <stdio.h>
#include "lists.h"
/**
* listint_len - Calculates the quantity of items in a linked list.
* @h: The leader of the connected series of nodes
*
* Return: The quantity of items in a linked list.
*/
size_t listint_len(const listint_t *h) /*prototype*/
{
int count = 0;
if (h != NULL)
{
while (h)
{
h = h->next;
count++;
}
}
return (count);
}
