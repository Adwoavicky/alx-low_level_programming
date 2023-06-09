#include "main.h"

/**
* print_binary - displays the binary representation of a number
* @n: number to be outputted
* Return: always 0
*/

void print_binary(unsigned long int n)
{
	int p, v = 0;
	unsigned long int h;

	for (p = 63; p >= 0; p--)
	{
		h = n >> p;

		if (h & 1)
		{
			_putchar('1');
			v++;
		}
		else if (v)
		_putchar('0');
	}
	if (!v)
		_putchar('0');
}

