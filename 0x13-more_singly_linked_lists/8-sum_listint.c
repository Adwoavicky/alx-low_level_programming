#include "lists.h"

/**
* sum_listint - returns the sum of all the data of a listint_t
* @head: the pointer to be sum
* Return: the  data that has been summed
*/

int sum_listint(listint_t *head)
{
	int h = 0;
	listint_t *g = head;

	while (g)
	{
		h += g->n;
		g = g->next;
	}

	return (h);
}
