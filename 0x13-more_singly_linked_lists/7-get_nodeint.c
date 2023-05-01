#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of a list
 * @head: first node of the list
 * @index: the position or number of the node
 *
 * Return: the nth node in the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	{
		head = head->next;
	}
	return (head);
}
