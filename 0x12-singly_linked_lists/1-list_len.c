#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: pointer to the list_t list
* Return: number of elements in h
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}

/**
* list_concat - concatenates two linked lists
* @head1: pointer to the head of the first list
* @head2: pointer to the head of the second list
* Return: pointer to the head of the concatenated list
*/
list_t *list_concat(list_t **head1, list_t **head2)
{
if (*head1 == NULL)
return (*head2);
if (*head2 == NULL)
return (*head1);

list_t *current = *head1;
while (current->next != NULL)
current = current->next;

current->next = *head2;

return (*head1);
}

