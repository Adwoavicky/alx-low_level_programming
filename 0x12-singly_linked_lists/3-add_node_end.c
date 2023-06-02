#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - a function that add a new node at the end of list_t
* @head: double pointer
* @str: pointer to be added
* Return: the address of the new elements or NULL if otherwise
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *k;
	list_t *g = *head;
	unsigned int len = 0;

	if (!str)
		return (NULL);
	do {
		len++;
	} while (str[len]);

	k = malloc(sizeof(list_t));
	if (!k)
		return (NULL);

	k->str = strdup(str);
	k->len = len;
	k->next = NULL;

	if (!*head)
		*head = k;
	else
	{
		while (g->next)
			g = g->next;

		g->next = k;
	}

	return (k);
}
