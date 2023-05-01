#include "lists.h"

/**
 * pop_listint - this function deletes the head of the node of a list
 * @head: pointer to the first node
 *
 * Return: returns the head node's data n.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
