#include "main.h"
/**
* puts_half - prints half of a string
* @str: string in question
* Return: void
*/

void puts_half(char *str)
{
	int m, n;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	n = m / 2;

	if (m % 2 == 1)
	{
		n++;
	}

	while (n < m)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
