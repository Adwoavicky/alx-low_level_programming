#include <stdio.h>
#include "lists.h"

/**
* print_list - displays all elements of a list_t
* @h: pointer to be displayed
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t k = 0;

	for (; h; h = h->next, k++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (k);
}
