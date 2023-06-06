#include "lists.h"

/**
* free_listint - a function that frees a listint_t
* @head: the pointer to be freed
* Return: always 0
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
