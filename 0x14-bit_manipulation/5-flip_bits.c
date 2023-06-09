#include "main.h"

/**
* flip_bits - outputs the number of bit to be flipped between two numbers
* @n: first number of bit
* @m: second number of bit
* Return: the change in the two numbers
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, v = 0;
	unsigned long int j;
	unsigned long int h = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		j = h >> p;
		if (j & 1)
			v++;
	}
	return (v);
}
