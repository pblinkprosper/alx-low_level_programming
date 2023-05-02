#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts a new node at a given index
 * @head: this is the first node
 * @idx: this is the index of the node
 * @n: this is the counter
 *
 * Return: returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int check;
	listint_t *n_node, *c_node;

	c_node = *head;
	if (idx != 0)
	{
		for (check = 0; check < idx - 1 && c_node != NULL; check++)
		{
			c_node = c_node->next;
		}
	}
	if (c_node == NULL && idx != 0)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
	}
	else
	{
		n_node->next = c_node->next;
		c_node->next = n_node;
	}
	return (n_node);
}
