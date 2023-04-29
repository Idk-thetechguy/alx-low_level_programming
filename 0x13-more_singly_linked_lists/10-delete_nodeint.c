#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Double pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	current = *head;

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	next = current->next->next;
	free(current->next);
	current->next = next;

	return (1);
}
