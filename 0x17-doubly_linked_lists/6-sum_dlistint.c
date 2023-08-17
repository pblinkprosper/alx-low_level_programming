#include "lists.h"

/**
 * sum_dlistint - sums all data of n on list
 * @head: head of the node
 *
 * Return: returns the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
