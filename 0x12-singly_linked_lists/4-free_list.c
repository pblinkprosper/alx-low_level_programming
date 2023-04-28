#include "lists.h"

/**
 * free_list - this frees all memory used by the list
 * @head: the first node of the list
 *
 * Return: return nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
