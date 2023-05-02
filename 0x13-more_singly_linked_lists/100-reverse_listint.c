#include "lists.h"

/**
 * reverse_listint - this function reverses a linked list
 * @head: the first node on the list
 *
 * Return: returns a pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_point;
	listint_t *current;

	new_point = NULL;
	current = NULL;
	while (*head)
	{
		new_point = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = new_point;
	}
	*head = current;
	return (*head);
}
