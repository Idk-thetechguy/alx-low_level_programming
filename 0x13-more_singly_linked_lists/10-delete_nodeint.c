#include "lists.h"
/**
* delete_nodeint_at_index - Deletes the node at index of a linked list.
* @head: Double pointer to the head of the linked list.
* @index: Index of the node to be deleted.
*
* Return: 1 on success, -1 on failure.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
