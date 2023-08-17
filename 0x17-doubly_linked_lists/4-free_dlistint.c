#include "lists.h"

/**
 * free_dlistint - this function frees a list
 *
 * @head: head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
