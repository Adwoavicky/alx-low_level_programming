#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* _strdup - Fuction that copies the content of a string
* @str: char to be copied
* Return: NULL if str is 0
*/

char *_strdup(char *str)
{
	char *n;
	int j, p = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)

	n = malloc(sizeof(char) * (j + 1));

	if (n == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
	{
		n[p] = str[p];
	}

	return (n);
}
