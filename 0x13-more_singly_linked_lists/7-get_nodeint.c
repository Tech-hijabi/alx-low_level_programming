#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a linked list
 * @head: pointer to the head node
 * @index: the index of the node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
