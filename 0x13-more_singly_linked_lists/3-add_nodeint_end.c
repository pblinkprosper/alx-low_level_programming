#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node at the end of the list
 * @head: the first node in the list
 * @n: the number of elements in the list
 *
 * Return: the address the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *elem;
	listint_t *temp;

	elem = (listint_t *)malloc(sizeof(listint_t));
	if (elem == NULL)
		return (NULL);
	elem->n = n;
	elem->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = elem;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = elem;
	}
	return (*head);
}
