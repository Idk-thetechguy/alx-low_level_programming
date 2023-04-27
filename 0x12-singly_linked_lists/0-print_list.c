#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* create_node - creates a new node with the given string
*
* @str: the string to be stored in the new node
*
* Return: the newly created node
*/
list_t *create_node(char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = str;
new_node->len = strlen(str);
new_node->next = NULL;

return (new_node);
}

/**
* print_list - prints all the elements of a linked list
*
* @h: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
s++;
}

return (s);
}

/**
* free_list - frees all the nodes in a linked list
*
* @head: pointer to the head of the list_t list to free
*/
void free_list(list_t *head)
{
list_t *current = head;
list_t *next;

while (current)
{
next = current->next;
free(current);
current = next;
}
}
