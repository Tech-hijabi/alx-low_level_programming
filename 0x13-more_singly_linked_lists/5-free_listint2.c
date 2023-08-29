#include "lists.h"

/**
 * free_listint2 - function frees the list & sets the head to null
 * @head: dereferenced pointer to the head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *gone;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		gone = *head;
		*head = (*(head))->next;
		free(gone);
	}
	*head = NULL;
}
