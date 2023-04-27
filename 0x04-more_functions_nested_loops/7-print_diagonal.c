#include "main.h"
/**
* print_diagonal - draws a diagonal line
* @n: the character to be drawn
* Return: always 0
*/

void print_diagonal(int)
{
	int m, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (m = 0; m < n; m++)
	{
		for (p = 0; p < m; p++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
