#include "main.h"

/**
* get_bit - displays the return value of a bit at a given index
* @n: number of integers to be displayed
* @index: the index starting from 0
* Return: value of the bit at index or -1 if otherwise
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int re_bit;

	if (index > 63)
		return (-1);
	re_bit = (n >> index) & 1;

	return (re_bit);
}
