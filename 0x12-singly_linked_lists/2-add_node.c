#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* create_node - creates a new node with the given data
*
* @str: the string to store in the node
*
* Return: a pointer to the new node, or NULL on failure
*/
list_t *create_node(const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;

return (new_node);
}

/**
* add_node - adds a new node at the beginning of a linked list
*
* @head: a pointer to a pointer to the head of the list
* @str: the string to store in the new node
*
* Return: a pointer to the new head of the list, or NULL on failure
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (!head)
return (NULL);

new_node = create_node(str);
if (!new_node)
return (NULL);

new_node->next = *head;
*head = new_node;

return (*head);
}
