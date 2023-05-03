#include "main.h"
/**
* _puts - print a string and new line
* @str: string to be printed
* Return: string and new line
*/

void _puts(char *str)
{
	int h = 0;

	while (str[h])
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
