#include "lists.h"

/**
* free_listint_safe - a function that frees a listint_t list
* @h: a double pointer to be freed
* Return: the size of list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
	size_t k = 0;
	int rid;
	listint_t *g;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		rid = *h - (*h)->next;
		if (rid > 0)
		{
			g = (*h)->next;
			free(*h);
			*h = g;
			k++;
		}
		else
		{
			free(*h);
			*h = NULL;
			k++;
			break;
		}
	}
	*h = NULL;
	return (k);
}
