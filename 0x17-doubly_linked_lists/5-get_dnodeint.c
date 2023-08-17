#include "lists.h"

/**
 * get_dnodeint_at_index - function returns nth node
 *
 * @head: pointer to head node
 *
 * @index: index to place node
 *
 * Return: the list or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (index == i)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
