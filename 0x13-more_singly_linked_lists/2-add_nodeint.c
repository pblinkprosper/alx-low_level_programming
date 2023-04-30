#include "lists.h"

/**
 * add_nodeint - this function adds a new node at the beginning of the list
 * @head: the first node of the list
 * @n: the number of elements in the list
 *
 * Return: the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *elem;

	elem = (listint_t *)malloc(sizeof(listint_t));
	if (elem == NULL)
		return (NULL);
	elem->n = n;
	elem->next = *head;
	*head = elem;

	return (*head);
}
