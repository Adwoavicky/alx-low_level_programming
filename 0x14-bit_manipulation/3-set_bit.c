#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: the pointer to be set
* @index: the index which starts from 0
* Return: 1 if its sucessful or -1 if otherwise
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1UL << index));
	return (1);
}
