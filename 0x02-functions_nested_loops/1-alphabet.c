#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 * Return: always 0
 */

void print_alphabet(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
