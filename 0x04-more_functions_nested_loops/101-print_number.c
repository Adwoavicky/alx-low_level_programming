#include "main.h"
/**
* print_number - displays an integer
* @n: integer to display
*
* Return: always 0
*/

void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		_putchar(45);
		b = -b;
	}
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar(b % 10 + '0');
}
