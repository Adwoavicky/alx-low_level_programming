#include "lists.h"

/**
* listint_len - outputs the returns of all elements in a listint_t
* @h: the pointer to be outputed
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t k;

	for (k = 0; h != NULL; h = h->next)
	{
		k++;
	}

	return (k);
}
