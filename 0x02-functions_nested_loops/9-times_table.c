#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* Return: always 0
*/

void times_table(void)
{
	int q, r, s, t, u;

	for (q = 0; q <= 9; q++)
	{
	for (r = 0; r <= 9; r++)
	{
	s = q * r;
	if (s > 9)
	{
	t = s % 10;
	u = (s - t) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(u + '0');
	_putchar(t + '0');
	}
	else
	{
	if (r != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(s + '0');
	}
	}
	_putchar('\n');
	}
}
