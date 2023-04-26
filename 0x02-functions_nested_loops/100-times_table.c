#include "main.h"
/**
* print_times_table - prints the times table starting from 0
* @n: the number to print
*/

void print_times_table(int n)
{
	int m, c, q;

	if (n >= 0 && n <= 15)
	{
	for (m = 0; m <= n; m++)
	{
	_putchar('0');
	for (c = 1; c <= n; c++)
	{
	_putchar(',');
	_putchar(' ');
	q = m * c;
	if (q <= 99)
	_putchar(' ');
	if (q <= 9)
	_putchar(' ');
	if (q >= 100)
	{
	_putchar((q / 100) + '0');
	_putchar(((q / 10)) % 10 + '0');
	}
	else if (q <= 99 && q>= 10)
	{
	_putchar((q / 10) + '0');
	}
	_putchar((q % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
