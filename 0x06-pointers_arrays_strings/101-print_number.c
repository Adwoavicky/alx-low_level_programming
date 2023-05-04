#include "main.h"

/**
* print_number - prints an integer
* @n: the integer to print
* Return: always void
*/

void print_number(int n)
{
	unsigned int b;

	b = n;

	if (n < 0)
	{
		_putchar(45);
		b = -n;
	}
	if (b / 10 != 0)
	{
		print_number(b / 10);
	}
	_putchar((b % 10) + '0');
}

