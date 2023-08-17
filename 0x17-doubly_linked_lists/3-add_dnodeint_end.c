#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of list
 * @head: head of the node
 * @n: value of element
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL;
	dlistint_t *end = *head;

	list = malloc(sizeof(dlistint_t));

	if (!list)
		return (NULL);
	list->n = n;
	list->prev = NULL;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}
	while (end->next)
		end = end->next;
	list->prev = end;
	end->next = list;

	return (list);
}
