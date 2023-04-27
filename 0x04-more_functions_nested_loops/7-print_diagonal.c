#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: input variable
*
* Return: always void
*/

void print_diagonal(int n)
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
