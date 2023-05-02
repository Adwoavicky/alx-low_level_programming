#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: the string to be printed
* Return: void
*/

void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
