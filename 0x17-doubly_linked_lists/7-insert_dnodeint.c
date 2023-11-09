#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: first pointer
 * @idx: index of the new node
 * @n: adress of the new node
 * Return: the address f the new node otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *new;
	unsigned int p;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		p = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (p == idx)
			{
				if (head->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						new->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			p++;
		}
	}
	return (new);
}
