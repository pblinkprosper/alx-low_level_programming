#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - this function prints a linked list with a loop
 * @head: this is the first node on the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *cr;

	if (!head)
		exit(98);
	cr = head;
	count = 0;
	while (cr)
	{
		printf("[%p] %d\n", (void *)&cr->n, cr->n);
		count++;
		if (cr <= cr->next)
		{
			printf("-> [%p] %d\n", (void *)cr->next, cr->next->n);
			break;
		}
		cr = cr->next;
	}
	return (count);
}
