#include "lists.h"

/**
 * pop_listint - function deletes the head node and returns it's data
 * @head: dereferenced pointer to the head node
 *
 * Return: data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}
