#include "lists.h"

/**
 * print_dlistint - displays all elements of a list
 * @h: head of lists to be displayed
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}