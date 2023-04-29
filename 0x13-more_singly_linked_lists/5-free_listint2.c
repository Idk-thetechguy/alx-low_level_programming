#include "lists.h"
/**
* free_listint2 - Frees a linked list.
* @head: Pointer to the listint_t list to be freed.
* This function frees all the memory allocated to a linked list. It takes a
* pointer to the head of the list as a parameter and iterates through the list,
* freeing each node until the end of the list is reached. The function also
* sets the head pointer to NULL at the end to ensure that the list is completel
* freed.
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}
