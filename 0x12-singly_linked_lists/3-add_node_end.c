#include "lists.h"
#include <string.h>

/**
 * add_node_end - this function adds a new node at the end of the list
 * @head: this is the first node on the list
 * @str: this is the string to be copied into the node
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *elem;
	list_t *temp;
	size_t n;

	elem = malloc(sizeof(list_t));
	if (elem == NULL)
		return (NULL);
	elem->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	elem->len = n;
	elem->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = elem;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = elem;
	}
	return (*head);
}
