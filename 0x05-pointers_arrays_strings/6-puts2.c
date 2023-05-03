#include "main.h"

/**
* puts2 - prints some characters
* @str: character to be printed
* Return: void
*/

void puts2(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		if (g % 2 == 0)
		{
			_putchar(str[g]);
		}
		g++;
	}
	_putchar('\n');
}
