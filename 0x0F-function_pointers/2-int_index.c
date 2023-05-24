#include "function_pointers.h"

/**
* int_index - looks for an integer
* @array: string of characters
* @size: size of integers
* @cmp: pointer to function
* Return: always void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
