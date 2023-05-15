#include <stdlib.h>
#include "main.h"

/**
* create_array - Creates an array of char and initializes
* @size: the size of the array
* @c: char to be created
* Return: NULL if size is 0 and pointer to the array
*/

char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int b;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
		str[b] = c;
	return (str);
}
