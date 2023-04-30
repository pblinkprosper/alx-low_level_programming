#include "lists.h"

/**
 * free_listint - this function frees memory held by the list
 * @head: the first node in the list
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
