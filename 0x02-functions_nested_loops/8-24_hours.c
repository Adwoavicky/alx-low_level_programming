#include "main.h"
/**
* jack_bauer - prints every minute of the day from 00:00 to 23:59
* Retur: always 0
*/

void jack_bauer(void)
{
	int l, m, n, o;

	for (l = 0; l <= 2; l++)
	{
	for (m = 0; m <= 9; m++)
	{
	for (n = 0; n <= 5; n++)
	{
	for (o = 0; o <= 9; o++)
	{
	if (l >= 2 && m >= 4)
		break;
	_putchar(l + 48);
	_putchar(m + 48);
	_putchar(':');
	_putchar(n + 48);
	_putchar(o + 48);
	_putchar('\n');
	}
	}
	}
	}
}
