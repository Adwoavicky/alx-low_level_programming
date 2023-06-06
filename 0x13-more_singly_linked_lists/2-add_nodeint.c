#include "lists.h"

/**
* add_nodeint - adds a new node tot he beginning of a listint_t
* @head: a double pointer
* @n: integer to be added
* Return: the address of the new element or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));
	if (!k)
		return (NULL);

	k->n = n;
	k->next = *head;
	*head = k;

	return (k);
}
