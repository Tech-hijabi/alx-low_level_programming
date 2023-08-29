#include "lists.h"

/**
 * free_listint - function frees the listint_t list
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
