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
	const listint_t *temp;

	count = 0;
	while (head)
	{
		count++;
		temp = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	if (!temp)
		exit(98);
	return (count);
}
