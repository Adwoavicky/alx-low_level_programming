#include "lists.h"

/**
* insert_nodeint_at_index - insert a new node at a given position
* @head: the double pointer to be inserted
* @idx: the index which will be added to the new node
* @n: amount of data to be inserted
* Return: the address of the new node or NULL if otherwise
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int g;
	listint_t *j;
	listint_t *h = *head;

	j = malloc(sizeof(listint_t));
	if (!j || !head)
		return (NULL);

	j->n = n;
	j->next = NULL;

	if (idx == 0)
	{
		j->next = *head;
		*head = j;
		return (j);
	}

	for (g = 0; h && g < idx; g++)
	{
		if (g == idx - 1)
		{
			j->next = h->next;
			h->next = j;
			return (j);
		}
		else
			h = h->next;
	}
	return (NULL);

}
