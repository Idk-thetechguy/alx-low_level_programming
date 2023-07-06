#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
* get_nodeint_at_index - Returns the node at a given index in a linked list.
* @head: Pointer to the head of the linked list.
* @index: Index of the node to retrieve.
*
* Return: Pointer to the node at the given index, or NULL if not found.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head)
{
while (head)
{
if (count == index)
return (head);
head = head->next;
count++;
}
}
return (NULL);
}
