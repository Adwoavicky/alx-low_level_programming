#include "lists.h"

/**
* add_nodeint_end - adds a new node to the end of a listint_t
* @head: a double pointer
* @n: an integer to be added
* Return: the address of the new elements
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *k;
	listint_t *h = *head;

	k = malloc(sizeof(listint_t));

	if (!k)
		return (NULL);

	k->n = n;
	k->next = NULL;

	if (*head == NULL)
	{
		*head = k;
		return (k);
	}

	while (h->next != NULL)
	{
		h = h->next;
	}

	h->next = k;

	return (k);
}
