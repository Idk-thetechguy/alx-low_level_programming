#include "lists.h"
/**
* print_listint_safe - Prints a listint_t linked list
* @head: A pointer to the head of the list
*
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp;
size_t count = 0;
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;
temp = head;
head = head->next;
if (temp <= head)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98);
}
}
return (count);
}
