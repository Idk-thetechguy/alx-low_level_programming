#include "lists.h"
/**
* get_nodeint_at_index - returns the node at a given index in a linked list
*
* @head: the first node in the linked list
*
* @index: the index of the desired node
*
* Return: a pointer to the node at the specified index, or NULL if not found
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
