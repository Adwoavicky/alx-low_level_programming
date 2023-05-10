#include "main.h"

/**
* _print_rev_recursion - displays a string in backward
* @s: the string to be displayed backwards
* Return: always void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
