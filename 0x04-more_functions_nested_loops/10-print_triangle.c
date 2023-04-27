#include "main.h"

/**
* print_triangle - Entry point
* description: prints a triangle on the terminal
* @size: size of triangle
* Return: always sucess
*/

void print_triangle(int size)
{
	int row, lines, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (lines = 1; lines <= row; lines++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
