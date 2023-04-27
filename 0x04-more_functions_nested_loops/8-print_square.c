#include "main.h"
/**
* print_square - prints a square to the terminal
* @size: size of squar
* Return: always 0
*/

void print_square(int size)
{
	int d, e;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (d = 0; d < size; d++)
	{
		for (e = 0; e < size; e++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
