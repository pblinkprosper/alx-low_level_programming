#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this function prints the elements in the list
 * @h: the singly linked list
 *
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
