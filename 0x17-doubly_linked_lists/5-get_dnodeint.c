#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: first pointer
 * @index: index of the node starting from 0
 * Return: nth null otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;
	dlistint_t *tmp;

	k = 0;
	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == k)
			return (tmp);
		k++;
		tmp = tmp->next;
	}
	return (NULL);
}
