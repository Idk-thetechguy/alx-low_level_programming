#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - Removes the head node of a linked list.
* @head: A pointer to a pointer to the head node.
*
* Return: The value of the removed node.
*/
int pop_listint(listint_t **head)
{
listint_t *new_head;
int n = 0;
if (*head != NULL)
{
new_head = (*head)->next;
n = (*head)->n;
free(*head);
*head = new_head;
}
return (n);
}
