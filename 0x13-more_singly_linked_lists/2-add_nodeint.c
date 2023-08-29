#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a linked list
 * @head: dereferenced pointer to the head node
 * @n: new elements added
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
