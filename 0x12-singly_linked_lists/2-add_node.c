#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - fuction that adds a new node to the start of a list_t
* @head: a double pointer
* @str: pointer to be added
* Return: the address of the new element, NULL if otherwise
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *kin;
	const char *k;
	unsigned int len = 0;

	for (k = str; *k; k++)
		len++;
	kin = malloc(sizeof(list_t));
	if (!kin)
		return (NULL);

	kin->str = strdup(str);
	kin->len = len;
	kin->next = *head;
	*head = kin;

	return (*head);
}
