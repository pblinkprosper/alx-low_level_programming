#include "lists.h"
#include <stdio.h>

/**
 * print_list - this function prints the content of the list
 * @h: the list to be printed
 *
 * Return: returns the number of items in the list
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
