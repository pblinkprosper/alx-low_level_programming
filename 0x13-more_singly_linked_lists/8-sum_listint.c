#include "lists.h"

/**
 * sum_listint - this function calculates and returns the sum of data in list
 * @head: first node on the list
 *
 * Return: returns the sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	int n;

	if (head == NULL)
		return (0);
	n = 0;
	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
