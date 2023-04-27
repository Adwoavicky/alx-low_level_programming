#include "main.h"

/**
* print_line - draws a straight line in terminal
* @n: numbers of times the character _ is drawn
* Return: void
*/

void print_line(int n)
{
	int p;

		for (p = 0; p < n; p++)
		{
		_putchar(95);
		}
	_putchar('\n');
}
