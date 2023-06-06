#include "lists.h"

/**
* find_listint_loop - a function that finds the loop in a linked list
* @head: a pointer
* Return: the address of the node where the loop begins or NULL if otherwise
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *g = head;
	listint_t *h = head;

	if (head == NULL)
		return (NULL);
	do {
		if (h == NULL || h->next == NULL)
			return (NULL);

		g = g->next;
		h = h->next->next;
	} while (g != h);

	g = h;
	while (g != h)
	{
		g = g->next;
		h = h->next;
	}

	return (h);
}
