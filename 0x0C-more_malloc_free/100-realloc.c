#include <stdlib.h>
#include "main.h"

/**
* *_realloc - prints the reallocation of a memory block
* @ptr: pointer to the memory
* @old_size: size of the new allocated space in bytes
* @new_size: new size of the new mwmory block in bytes
* Return: pointer to the new allocated memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *d;
	char *f;
	unsigned int s;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	d = malloc(new_size);
	if (!d)
		return (NULL);
	f = ptr;
	if (new_size < old_size)
	{
		for (s = 0; s < new_size; s++)
			d[s] = f[s];
	}
	if (new_size > old_size)
	{
		for (s = 0; s < old_size; s++)
			d[s] = f[s];
	}
	free(ptr);
	return (d);
}
