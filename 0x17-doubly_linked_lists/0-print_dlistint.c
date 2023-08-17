#include "lists.h"

/**
 * print_dlistint - this prints all the elements of the list
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
