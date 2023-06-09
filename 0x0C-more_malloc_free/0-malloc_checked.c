#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - prints the allocation memory using malloc
* @b: number of bytes of  memory to be allocated
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
