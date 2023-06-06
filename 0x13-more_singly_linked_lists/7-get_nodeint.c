#include "lists.h"

/**
* get_nodeint_at_index - a function that returns the nth node of a listint_t
* @head: the pointer to be returned
* @index: the index of the node which starts from 0
* Return: pointer to the node otherwise NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *h = head;

	while (h && m < index)
	{
		h = h->next;
		m++;
	}

	return (h ? h : NULL);
}
