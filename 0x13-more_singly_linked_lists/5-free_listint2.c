#include "lists.h"

/**
* free_listint2 - a function that frees a listint_t
* @head: a double pointer to be freed
* Return: always 0
*/

void free_listint2(listint_t **head)
{
	listint_t *h;

	for (h = *head; h != NULL; h = (*head))
	{
		*head = (*head)->next;
		free(h);
	}

	*head = NULL;
}
