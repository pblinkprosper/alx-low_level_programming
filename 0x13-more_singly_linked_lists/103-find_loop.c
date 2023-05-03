#include "lists.h"

/**
 * find_listint_loop - this function finds a loop in a linked list
 * @head: the first node of the list
 *
 * Return: the address of node where loop begins
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *spt = head;
	listint_t *fpt = head;

	if (head == NULL)
		return (NULL);

	while (spt && fpt && fpt->next)
	{
		fpt = fpt->next->next;
		spt = spt->next;
		if (fpt == spt)
		{
			spt = head;
			while (spt != fpt)
			{
				spt = spt->next;
				fpt = fpt->next;
			}
			return (fpt);
		}
	}

	return (NULL);
}
