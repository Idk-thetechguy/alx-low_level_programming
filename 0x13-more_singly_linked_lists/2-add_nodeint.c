#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - Inserts a fresh node at the start of a linked list.
* @head: The leader of the connected series.
* @n: The value that should be inserted into the newly created node.
*
* Return:  The location of the fresh component, or NULL if unsuccessful.
*/
listint_t *add_nodeint(listint_t **head, const int n) /*prototype*/
{
listint_t *new_list;
if (head != NULL)
{
new_list = malloc(sizeof(listint_t));
if (new_list == NULL)
return (NULL);
new_list->n = n;
new_list->next = *head;
*head = new_list;
return (new_list);
}
return (NULL);
}
