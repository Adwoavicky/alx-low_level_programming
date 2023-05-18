#include <stdlib.h>
#include "main.h"

/**
* *array_range - prints an array of integers
* @min: minimum range of integers
* @max: maximum range of integers
* Return: pointed to the newly created array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int m, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);
	for (m = 0; min <= max; m++)
		ptr[m] = min++;
	return (ptr);
}
