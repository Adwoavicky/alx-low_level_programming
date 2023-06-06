#include "lists.h"

/**
* delete_nodeint_at_index - deletes the nodeindex of a listint_t
* @head: the double pointed to be deleted
* @index: the index of the node that should be deleted
* Return: 1 if succesful and -1 if otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *k = NULL;
	unsigned int g = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}

	while (g < index - 1)
	{
		if (!h || !(h->next))
			return (-1);
		h = h->next;
		g++;
	}

	k = h->next;
	h->next = k->next;
	free(k);
	return (1);
}
