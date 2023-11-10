#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: first pointer
 * @index: index of the new node
 * Return: 1 if it succeeded, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n;
	dlistint_t *m;
	unsigned int p;

	n = *head;

	if (n != NULL)
		while (n->prev != NULL)
			n = n->prev;

	p = 0;

	while (n != NULL)
	{
		if (p == index)
		{
			if (p == 0)
			{
				*head = n->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				m->next = n->next;

				if (n->next != NULL)
					n->next->prev = m;
			}

			free(n);
			return (1);
		}
		m = n;
		n = n->next;
		p++;
	}

	return (-1);
}
