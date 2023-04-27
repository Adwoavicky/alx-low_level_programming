#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14, 10 times
* Return: always sucess
*/

void more_numbers(void)
{
	int m, n;

	for (m = 0; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar('1');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
