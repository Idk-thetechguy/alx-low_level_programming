#include <stdio.h>
#include "lists.h"
/**
* print_listint - Displays every item in a linked list.
* @h: The leader of the interconnected series of nodes.
*
* Return: The quantity of elements in the linked list.
*/
size_t print_listint(const listint_t *h) /*prototype*/
{
int count = 0;
if (h != NULL)
{
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
}
return (count);
}
