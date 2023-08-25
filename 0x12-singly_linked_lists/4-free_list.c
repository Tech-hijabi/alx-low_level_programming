#include "lists.h"

/**
 * free_list - function frees the linked list_t list
 * @head: pointer to the head of the node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
