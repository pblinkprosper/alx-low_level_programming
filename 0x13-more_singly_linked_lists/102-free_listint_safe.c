#include "lists.h"

/**
 * free_listint_safe - this function frees a linked list
 * @h: first node on list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	i = 0;
	while (*h != NULL)
	{
		i++;
		temp = *h;
		*h = (*h)->next;
		free(temp);

		if (temp <= *h)
			break;
	}
	*h = NULL;

	return (i);
}
