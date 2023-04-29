#include "lists.h"
/**
* print_listint - Prints all the elements of a linked list
*                of type listint_t
* @h: The head node of the linked list
*
* Return: The number of nodes in the linked list
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
