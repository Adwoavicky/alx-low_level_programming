#include "lists.h"

/**
* reverse_listint - a function that reverse a node in a listint_t
* @head: a double pointed to be reversed
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *dis = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = dis;
		dis = *head;
		*head = next;
	}
	*head = dis;

	return (*head);
}
