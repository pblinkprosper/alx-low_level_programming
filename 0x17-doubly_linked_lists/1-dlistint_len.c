#include "lists.h"

/**
 * dlistint_len - this function returns the number of elements
 * @h: pointer to the head node
 *
 * Return: returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
