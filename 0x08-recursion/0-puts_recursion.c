#include "main.h"

/**
* _puts_recursion - display a string
* @s: string to be displayed
* Return: always void
*/

void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
