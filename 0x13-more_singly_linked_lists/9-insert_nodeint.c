#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index - Inserts a new node at a given position in a
*                           linked list
* @head: Pointer to the head of the linked list
* @idx: Index position at which the new node should be inserted
* @n: Value to be stored in the new node
*
* Return: Pointer to the newly inserted node on success, NULL on failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *iter;
unsigned int count = 1;
if (head)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx > 0)
{
iter = *head;
while (iter)
{
if (count == idx)
{
new_node->next = iter->next;
iter->next = new_node;
return (new_node);
}
iter = iter->next;
count++;
}
if (idx > count)
return (NULL);
}
else
{
new_node->next = *head;
*head = new_node;
}
return (new_node);
}
return (NULL);
}
