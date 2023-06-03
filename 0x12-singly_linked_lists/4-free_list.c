#include <stdlib.h>
#include "lists.h"

/**
* free_list - a function that frees a list_t
* @head: the pointer to be set free
* Return: always 0
*/

void free_list(list_t *head)
{
	list_t *k;

	while (head)
	{
		k = head->next;
		free(head->str);
		free(head);
		head = k;
	}
}
