#include "lists.h"
#include <stdio.h>
/**
* count_nodes_in_loop - Counts the number of nodes in a loop
* @node: A pointer to a node in the loop
*
* Return: The number of nodes in the loop
*/
size_t count_nodes_in_loop(const listint_t *node)
{
size_t count = 0;
const listint_t *temp = node;
do {
count++;
temp = temp->next;
} while (temp != node);
return (count);
}
/**
* find_loop_start - Finds the start of a loop in a linked list
* @head: A pointer to the head of the linked list
*
* Return: A pointer to the start of the loop, or NULL if there is no loop
*/
listint_t *find_loop_start(listint_t *head)

{
listint_t *slow = head, *fast = head;
while (fast && fast->next)
{
slow = slow->next;
fast = fast -
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
/**
* print_listint_safe - Prints a listint_t list safely.
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
listint_t *loop_start = find_loop_start((listint_t *) head);
if (loop_start)
{
size_t loop_size = count_nodes_in_loop(loop_start);
const listint_t *temp = head;
for (; count < loop_size; count++)
{
printf("[%p] %d\n", (void *)temp, temp->n);
temp = temp->next;
}
printf("[%p] %d\n", (void *)temp, temp->n);
}
else
{
const listint_t *temp = head;
while (temp)
{
printf("[%p] %d\n", (void *)temp, temp->n);
temp = temp->next;
count++;
}
}
return (count);
}
