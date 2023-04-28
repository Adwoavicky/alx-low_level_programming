#include "main.h"

/**
* print_line - prints straights lines
* @n: number of times line is printed
*
* Return: void
*/

void print_line(int n)
{
	int p;

		for (p = 0; p < n; p++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
