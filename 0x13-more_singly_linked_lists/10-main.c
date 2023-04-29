#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
void add_nodes(listint_t **head);
void delete_nodes(listint_t **head);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
listint_t *head;
head = NULL;
add_nodes(&head);
delete_nodes(&head);
print_listint(head);
return (0);
}
/**
* add_nodes - add nodes to the linked list
*
* @head: pointer to the head of the linked list
*/
void add_nodes(listint_t **head)
{
add_nodeint_end(head, 0);
add_nodeint_end(head, 1);
add_nodeint_end(head, 2);
add_nodeint_end(head, 3);
add_nodeint_end(head, 4);
add_nodeint_end(head, 98);
add_nodeint_end(head, 402);
add_nodeint_end(head, 1024);
print_listint(*head);
printf("-----------------\n");
}
/**
* delete_nodes - delete nodes from the linked list
*
* @head: pointer to the head of the linked list
*/
void delete_nodes(listint_t **head)
{
delete_nodeint_at_index(head, 5);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
print_listint(*head);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
printf("-----------------\n");
delete_nodeint_at_index(head, 0);
}
