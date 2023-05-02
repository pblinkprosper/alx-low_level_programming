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
	size_t count = 0;
	const listint_t *temp;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		temp = head;
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (count);
}
