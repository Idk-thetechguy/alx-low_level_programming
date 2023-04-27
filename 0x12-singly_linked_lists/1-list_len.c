#include <stdlib.h>
#include "lists.h"

/**
* list_concat - concatenates two linked lists
* @head1: pointer to the head of the first list
* @head2: pointer to the head of the second list
* Return: pointer to the head of the concatenated list
*/
list_t *list_concat(list_t **head1, list_t **head2)
{
list_t *current;

if (*head1 == NULL)
return (*head2);

if (*head2 == NULL)
return (*head1);

current = *head1;

while (current->next != NULL)
current = current->next;

current->next = *head2;

return (*head1);
}
