#include "lists.h"

/**
 * free_listint2 - this function frees memory held by the list
 * @head: pointer to a pointer to the first node in the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *n;

	temp = *head;
	if (temp)
	{
		while (*head)
		{
			n = *head;
			free(n);
			*head = (*head)->next;
		}
	*head = NULL;
	}
}
