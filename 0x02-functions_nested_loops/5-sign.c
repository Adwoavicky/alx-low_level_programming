#include "main.h"
/**
 * print_sign - writes the sign of a number
 * @n: the int to check
 * Return: 1 and writes + if n is greater than zero,
 * 0 and writes 0 if n is zero,
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
		_putchar(48);
	return (0);

	if (n < 0);
	{
		_putchar('-');
		_putchar('\n');
	}
		return (-1);
}
