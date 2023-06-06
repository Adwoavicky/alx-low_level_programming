#include "lists.h"

/**
* pop_listint - a function tha deletes the head node of listint_t
* @head: the double pointer to be deleted
* Return: the head node's data, else 0 if otherwise
*/

int pop_listint(listint_t **head)
{
	listint_t *k;
	int m;

	if (!head || !*head)
		return (0);
	m = (*head)->n;
	k = (*head)->next;
	free(*head);
	*head = k;

	return (m);
}
