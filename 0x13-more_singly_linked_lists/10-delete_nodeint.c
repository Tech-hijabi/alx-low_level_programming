#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at index of a list
 * @head: a pointer to the pointer to the head node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 (success) or -1 (failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		prev = current;
		current = current->next;

		if (current == NULL)
			return (-1);
	}
	if (prev == NULL)
	{
		*head = current->next;
	}
	else
		prev->next = current->next;

	free(current);

	return (1);
}
