#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
* looped_listint_len - outputs the total number of codes
* @head: the pointer to be outputted
* Return: 0 if not looped
*/

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *d = head;
	const listint_t *i = head;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	d = head->next;
	i = (head->next)->next;

	while (i && i->next)
	{
		d = d->next;
		i = i->next->next;

		if (d == i)
		{
			i = i->next;

			while (d != i)
			{
				node++;
				i = i->next;
			}

			return (node);
		}
	}
	return (0);
}


/**
* print_listint_safe - outputs a listint_t list
* @head: the pointer to be outputed
* Return: the number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
