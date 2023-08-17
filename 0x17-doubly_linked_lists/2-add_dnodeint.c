#include "lists.h"

/**
 * add_dnodeint - this function adds a node at the begining of the list
 * @head: head node of the list
 * @n: the value
 *
 * Return: the address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = n_node;
	*head = n_node;

	return (n_node);
}
