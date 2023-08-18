#include "lists.h"

/**
 * insert_dnodeint_at_index - Add node at nth index
 *
 * @h: Head of node
 *
 * @idx: index
 *
 * @n: value of element
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int i = 0;

	if (h == NULL || n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		n_node = add_dnodeint(h, n);
		return (n_node);
	}
	while (current)
	{
		if (current->next == NULL && i == idx - 1)
		{
			n_node = add_dnodeint_end(h, n);
			return (n_node);
		}
		else if ((idx - 1) == i)
		{
			n_node->next = current->next;
			n_node->prev = current;
			current->next->prev = n_node;
			current->next = n_node;
			return (n_node);
		}
		i++;
		current = current->next;
	}
	free(n_node);
	return (NULL);
}
