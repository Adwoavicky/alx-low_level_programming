#include "main.h"
/**
 * print_alphabet_x10 - write the alphabet in lowercase 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char m;
	int n = 0;
		while (n < 10)
		{
		for (m = 'a'; m <= 'z'; m++)
		{
		_putchar(m);
		}

		_putchar('\n');
		n++;
		}
}
