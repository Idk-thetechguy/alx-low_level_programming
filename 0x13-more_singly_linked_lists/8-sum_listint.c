#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - Calculates the sum of all the integers in a linked list.
* @head: Pointer to the head of the linked list.
*
* Return: The sum of all the integers in the linked list.
*/
int sum_listint(listint_t *head)
{
int amount = 0;
if (head)
{
while (head)
{
amount += head->n;
head = head->next;
}
}
return (amount);
}
