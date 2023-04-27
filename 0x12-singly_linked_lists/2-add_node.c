#include "lists.h"
#include <string.h>

/**
 * add_node - the function adds a new node at the beginning of the list
 * @head: the first node in the list
 * @str: string to store in the list
 *
 * Return: the address of the new element if succeed or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *elem;
	size_t n;

	elem = malloc(sizeof(list_t));
	if (elem == NULL)
		return (NULL);
	elem->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	elem->len = n;
	elem->next = *head;
	*head = elem;

	return (*head);
}
