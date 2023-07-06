#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* add_nodeint_end - Appends a fresh element to the tail of a linked list.
* @head: The leader of the connected sequence.
* @n: The additional value for appending at the conclusion
*     of the linked list.
*
* Return:  The location of the fresh item, or if unsuccessful, it is NULL.
*/
listint_t *add_nodeint_end(listint_t **head, const int n) /*prototype*/
{
listint_t *new_list, *temp;
if (head)
{
new_list = malloc(sizeof(listint_t));
if (new_list == NULL)
return (NULL);
new_list->n = n;
new_list->next = NULL;
if (*head == NULL)
{
*head = new_list;
return (*head);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_list;
return (temp);
}
}
return (NULL);
}
