#include "main.h"

/**
* print_chessboard - displays the chessboard
* @a: character to be displayed
* Return: always 0
*/

void print_chessboard(char (*a)[8])
{
	int n, m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[n][m]);
		}
		_putchar('\n');
	}
}
