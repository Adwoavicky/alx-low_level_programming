#include "main.h"

/**
* clear_bit - sets the value of a bit to 0
* @n: number of bit to be set
* @index: the index which starts from 0
* Return: 1 if sucessful and 0 if otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
