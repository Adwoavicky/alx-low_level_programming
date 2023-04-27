#include "main.h"
/**
* print_numbers - display numbers from 0 to 9
* Return: Always sucess
*/

void print_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
	_putchar(b);
	}
	_putchar('\n');
}
