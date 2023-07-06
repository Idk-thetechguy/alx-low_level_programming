#include <stdlib.h>
#include "lists.h"
/**
* free_listint - Deallocates a linked list
* @head: The header of the interconnected list
*
* Return: Nothing
*/
void free_listint(listint_t *head) /*prototype*/
{
listint_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
free(head);
}
