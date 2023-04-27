#include "lists.h"

/**
 * list_len - this function prints the lenght of the list
 * @h: the singly linked list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
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
