#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes a node at a given index
 * @head: this is the first node on the list
 * @index: this is the index where the node will be deleted
 *
 * Return: 1 if succeed and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *del_node;

	current = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	i = 0;
	while (current)
	{
		if (i == index - 1)
		{
			del_node = current->next;
			current->next = del_node->next;
			free(del_node);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
