#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: dereferenced pointer to the head node
 * @idx: the index of the list where new node should be added
 * @n: elements added
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;

	if (idx)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		for (i = 0; i < idx - 1; i++)
		{
			if (*head == NULL)
				return (NULL);

			*head = (*head)->next;
		}

		new->next = (*head)->next;
		(*head)->next = new;

		return (new);
	}
	else
		return (NULL);
}
