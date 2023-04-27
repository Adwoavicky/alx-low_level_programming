#include "main.h"
/**
* print_line - draws a straight line
* @n: numbers of times a straight is drawn
* Return: always 0
*/

void print_line(int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
