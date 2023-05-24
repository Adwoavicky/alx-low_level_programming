#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - prints a parameter on each elements
* @array: string of characters
* @size: size of elements
* @action: pointer to the function
* Return: always 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
