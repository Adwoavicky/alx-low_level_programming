#include "lists.h"

/**
* print_listint - outputs all elements of a listint_t list
* @h: the pointer to be outputed
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	for (k = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		k++;
	}

	return (k);
}
