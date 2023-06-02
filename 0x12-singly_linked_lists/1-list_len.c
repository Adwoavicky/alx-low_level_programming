#include <stdio.h>
#include "lists.h"

/**
* list_len - displays the returns of all elements in a linked list_t
* @h: pointer to be returned
* Return: pointer h
*/

size_t list_len(const list_t *h)
{
	size_t g;

	for (g = 0; h; h = h->next, g++)
		;
	return (g);
}
