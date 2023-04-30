#include "lists.h"

/**
 * listint_len - this function returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: the number of elements of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
